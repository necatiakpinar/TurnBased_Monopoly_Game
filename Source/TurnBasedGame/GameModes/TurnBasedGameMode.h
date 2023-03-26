// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TurnBasedGameMode.generated.h"


class UMapLoaderManager;

UCLASS()
class TURNBASEDGAME_API ATurnBasedGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	UMapLoaderManager* MapLoaderManager;
	
public:
	virtual void InitGameState() override;
	virtual void StartPlay() override;

private:
	void InitializeManagers();
};
