// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TurnBasedGameGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDGAME_API UTurnBasedGameGameInstance : public UGameInstance
{
	GENERATED_BODY()

	virtual void Init() override;
	
};
