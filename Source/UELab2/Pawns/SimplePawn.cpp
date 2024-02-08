// Fill out your copyright notice in the Description page of Project Settings.


#include "SimplePawn.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogSimplePawn, All, All)

// Sets default values
ASimplePawn::ASimplePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//TODO: Create the component hierarchy in for this actor. What does the hierarchy look like. Draw it out on paper
	//CREATE scene component
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	
	//SET the Scene Component as the Root Component
	
	SetRootComponent(SceneComponent);
	
	//CREATE Static Mesh Component
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualMesh"));

	//ATTACH the Static Mesh Component to the Root Component
	StaticMeshComponent->SetupAttachment(RootComponent);

	//CREATE Spring Arm Component
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));

	//ATTACH the Spring Arm Component to the Root Component
	SpringArmComponent->SetupAttachment(RootComponent);

	//CREATE Camera Component
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	//ATTACH the Camera Component to the Spring Arm Component
	CameraComponent->SetupAttachment(SpringArmComponent);

	//SET the Spring Arm to Use Pawn Control Rotation (bUsePawnControlRotation)

	SpringArmComponent->bUsePawnControlRotation = true;

}

// Called when the game starts or when spawned
void ASimplePawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASimplePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//TODO: Implement the movement. Think about how the movement is done after you have written the implementation code. 
	// 
	if (GetController() != nullptr)
	//IF the Controller is NOT null

	{
		FRotator Rotation(0.f, GetControlRotation().Yaw, 0.f);
		//Controller, player controller
		//GetController()->GetControlRotation().Yaw

		FVector Direction = FVector::ZeroVector;
		//DECLARE a FRotator Rotation and Initialize it to pitch=0, roll=0 and the Yaw to the Controllers Yaw Rotation

		//DECLARE a FVector Direction and set it to zero vector

		if(MoveForwardAmount != 0)
		//IF the MoveForwardAmount is not zero

		{
			Direction = GetActorLocation() + FRotationMatrix(Rotation).GetUnitAxis(EAxis::X) * MoveForwardAmount * Velocity * DeltaTime;

			//SET the Direction to this Actors Location + FRotationMatrix(??).GetUnitAxis(??) * MoveForwardAmount * Velocity * DeltaTime

			SetActorLocation(Direction);
			//SET this actors location to the Direction

		}
		//ENDIF

		if (MoveRightAmount != 0)
		//IF the MoveRightAmount is not zero

		{
			Direction = GetActorLocation() + FRotationMatrix(Rotation).GetUnitAxis(EAxis::Y) * MoveRightAmount * Velocity * DeltaTime;

			//SET the Direction to this Actors Location + FRotationMatrix(??).GetUnitAxis(??) * MoveForwardAmount * Velocity * DeltaTime

			SetActorLocation(Direction);
			//SET this actors location to the Direction

		}
		//ENDIF
		
	}
	//ENDIF
}

// Called to bind functionality to input
void ASimplePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//TODO: Set up the Input Bindings. Be mindful of each input binding. What is the difference between the movement and looking around
	// 
	if (PlayerInputComponent != nullptr)
	//IF PlayerInputComponent Is Not null

	{
		//THis function attachs control to users device such as W A S D, moving foward right and up and down

		PlayerInputComponent->BindAxis("MoveForward", this, &ASimplePawn::MoveForward);
		//BIND axis "MoveForward" to this objects MoveForward() Function

		PlayerInputComponent->BindAxis("MoveRight", this, &ASimplePawn::MoveRight);
		//BIND axis "MoveRight" to this objects MoveRight() Function

		PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
		//BIND axis "LookUp" to this objects APawn's AddControllerPitchInput Function
		
		PlayerInputComponent->BindAxis("LookRight", this, &APawn::AddControllerYawInput);
		//BIND axis "LookRight" to this objects APawn's AddControllerYawInput Function

	}
	//ENDIF
}

void ASimplePawn::MoveForward(float Amount)
{
	MoveForwardAmount = Amount;
	//TODO: Set the MoveForwardAmount, what are the values passed in
	//ASSIGN Amount to MoveForwardAmount
	
}

void ASimplePawn::MoveRight(float Amount)
{
	MoveRightAmount = Amount;
	//TODO: Set the MoveRightAmount, what are the values passed in
	//ASSIGN Amount to MoveRightAmount
	
}

void ASimplePawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (!NewController) 
		return;
	UE_LOG(LogSimplePawn, Warning, TEXT("%s PossessBy: %s"), *GetName(), *NewController->GetName());
}

void ASimplePawn::UnPossessed()
{
	Super::UnPossessed();
	UE_LOG(LogSimplePawn, Warning, TEXT("%s Un Prossessed"), *GetName());
}

