// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjectBoardCard.h"
#include "GameFramework/Actor.h"
#include "ObjectBoardPenalty.generated.h"

UCLASS()
class TURNBASEDGAME_API AObjectBoardPenalty : public AObjectBoardCard
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObjectBoardPenalty();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
