// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingActor.h"

// Sets default values
AMovingActor::AMovingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMovingActor::MoveToNextPoint()
{
	if (CurrentPoint == NULL || CurrentPoint == SecondPoint) {

		CurrentPoint = FirstPoint;

	}
	else
	{
		CurrentPoint = SecondPoint;
	}
}

// Called when the game starts or when spawned
void AMovingActor::BeginPlay()
{
	Super::BeginPlay();
	MoveToNextPoint();
}

// Called every frame
void AMovingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FirstPoint || !SecondPoint) {
		return;
	}

	if (CurrentPoint) {
		FVector delta = (GetActorLocation() - CurrentPoint->GetActorLocation());
	}
}

