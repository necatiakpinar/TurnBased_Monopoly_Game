// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CombatActor.h"
#include "MainPlayer.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDGAME_API AMainPlayer : public ACombatActor
{
	GENERATED_BODY()

public:
	AMainPlayer();
	FVector CurrentVelocity;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	float MoveSpeed;

protected:
	virtual void BeginPlay() override;
	
public:
	virtual void Tick( float DeltaSeconds ) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	void MoveXAxis(float AxisValue);
	void MoveYAxis(float AxisValue);
	void Jump();
	
};
