// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurnBasedGame/Enums/WorldObjectTypes.h"
#include "BaseBoardArea.generated.h"

UCLASS()
class TURNBASEDGAME_API UBaseBoardArea : public UObject
{
	GENERATED_BODY()
	
public:
	FORCEINLINE EBoardAreaType GetAreaType() { return BoardAreaType; }
private:
	EBoardAreaType BoardAreaType;
public:	
	// Sets default values for this actor's properties
	UBaseBoardArea();
	void Initialize(EBoardAreaType BoardAreaType);

};
