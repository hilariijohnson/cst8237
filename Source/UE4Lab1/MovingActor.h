// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseActor.h"
#include "MovingActor.generated.h"

UCLASS()
class UE4LAB1_API AMovingActor : public ABaseActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingActor();

	UPROPERTY(EditInstanceOnly, Category = "Movement Point")
	class AActor * FirstPoint;

	UPROPERTY(EditInstanceOnly, Category = "Movement Point")
	class AActor * SecondPoint;

private:
	class AActor * CurrentPoint;
	void MoveToNextPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime);

};
