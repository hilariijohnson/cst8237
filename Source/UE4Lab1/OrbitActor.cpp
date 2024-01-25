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
	Reset();
}



void AOrbitActor::Reset()
{
	CurrentAngle = InitialRotationAngle;

	if (RotateAroundActor == nullptr) {

		return;
	}

	if (RotationRadius == FVector::ZeroVector) {

		RotationRadius = (GetActorLocation() - RotateAroundActor->GetActorLocation());
	}
}

// Called every frame
void AOrbitActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (RotateAroundActor != nullptr) {

		CurrentAngle += (RotationSpeed * DeltaTime);
		if (CurrentAngle > 360.0f) {
			CurrentAngle -= 360.0f;
		}


		const FVector NewLocation = RotateAroundActor->GetActorLocation() + RotationRadius.RotateAngleAxis(CurrentAngle, RotationAxis);
		SetActorLocation(NewLocation);

		FQuat NewRotation = FRotator(0,CurrentAngle,0).Quaternion();
		SetActorRotation(NewRotation);

	}
}