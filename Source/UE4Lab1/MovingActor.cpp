// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingActor.h"

// Sets default values
AMovingActor::AMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingActor::BeginPlay()
{
	Super::BeginPlay();
	MoveToNextPoint();
}


void AMovingActor::MoveToNextPoint()
{
	if (CurrentPoint == nullptr || CurrentPoint == SecondPoint) {

		CurrentPoint = FirstPoint;

	}else
	{
		CurrentPoint = SecondPoint;
	}
}

// Called every frame
void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (FirstPoint == nullptr || SecondPoint == nullptr) {
		return;
	}

	if (CurrentPoint != nullptr) {

		FVector delta = (GetActorLocation() - CurrentPoint->GetActorLocation());
		float distance =  delta.Size();

		if (distance < 100) {
			MoveToNextPoint();
		}

		delta.Normalize();

		FRotator NewLookAt = FRotationMatrix::MakeFromX(delta).Rotator();
		NewLookAt.Pitch = 0.0f;
		NewLookAt.Roll = 0.0f;
		NewLookAt.Yaw += -180.0f;

		FQuat slerprotation = FMath::Lerp(FQuat(GetActorRotation()), FQuat(NewLookAt), 0.08f);
		SetActorRotation(slerprotation);

		FVector lerplocation = FMath::VInterpConstantTo(GetActorLocation(), CurrentPoint->GetActorLocation(), DeltaTime, 600.f);
		SetActorLocation(lerplocation);


	}
}

