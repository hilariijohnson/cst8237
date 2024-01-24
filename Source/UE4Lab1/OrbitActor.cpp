// Fill out your copyright notice in the Description page of Project Settings.


#include "OrbitActor.h"

// Sets default values
AOrbitActor::AOrbitActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AOrbitActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOrbitActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(RotateAroundActor) {

		CurrentAngle += (RotationSpeed * DeltaTime);
		if(CurrentAngle > 360.f){
			CurrentAngle -= 360.f;
		}
	}

	FVector NewLocation = RotateAroundActor->GetActorLocation() + RotationRadius.RotateAngleAxis(CurrentAngle,RotationAxis);
	SetActorLocation(NewLocation);

	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += CurrentAngle;
	SetActorRotation(NewRotation);

}

void AOrbitActor::Reset()
{
	CurrentAngle = InitialRotationAngle;

	if (!RotateAroundActor) {

		return;
	}

	if (RotationRadius == FVector::ZeroVector) {

		RotationRadius = (GetActorLocation() - RotateAroundActor->GetActorLocation());
	}
}

