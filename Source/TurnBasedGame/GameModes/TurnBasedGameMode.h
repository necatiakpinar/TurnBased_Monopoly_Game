// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TurnBasedGameMode.generated.h"


class USSBoardData;
class USSMapLoader;
class UMapLoaderManager;

UCLASS()
class TURNBASEDGAME_API ATurnBasedGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	FORCEINLINE USSBoardData* GetBoardDataSubsystem() const {return BoardDataSubSystem;}
private:
	UMapLoaderManager* MapLoaderManager;
	USSBoardData* BoardDataSubSystem;
	USSMapLoader* MapLoaderSubSystem;
	
public:
	virtual void InitGameState() override;
	virtual void StartPlay() override;

private:
	void LoadSubsystems();
	void InitializeManagers();
};
