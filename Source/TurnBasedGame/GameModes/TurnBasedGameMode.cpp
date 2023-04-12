// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedGameMode.h"

#include "TurnBasedGameGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "TurnBasedGame/Managers/MapLoaderManager.h"
#include "TurnBasedGame/Subsystems/SSBoardData.h"
#include "TurnBasedGame/Subsystems/SSMapLoader.h"

void ATurnBasedGameMode::InitGameState()
{
	Super::InitGameState();
	//Load Subsystems
	LoadSubsystems();

	//Initialize managers 
	InitializeManagers();
}

void ATurnBasedGameMode::StartPlay()
{
	Super::StartPlay();
}

void ATurnBasedGameMode::LoadSubsystems()
{
	//Load Board Data
	UTurnBasedGameGameInstance* GameInstance = Cast<UTurnBasedGameGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GameInstance)
	{
		BoardDataSubSystem = GameInstance->GetSubsystem<USSBoardData>();
		MapLoaderSubSystem = GameInstance->GetSubsystem<USSMapLoader>();
	}
}

void ATurnBasedGameMode::InitializeManagers()
{
	MapLoaderSubSystem->CreateLevel(GetBoardDataSubsystem()->GetBoardData());
}

