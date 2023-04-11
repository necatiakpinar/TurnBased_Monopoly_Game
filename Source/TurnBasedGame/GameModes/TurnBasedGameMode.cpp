// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedGameMode.h"

#include "TurnBasedGameGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "TurnBasedGame/Managers/MapLoaderManager.h"
#include "TurnBasedGame/Subsystems/SSBoardData.h"

void ATurnBasedGameMode::InitGameState()
{
	Super::InitGameState();
	//Load data
	LoadAllGameData();

	//Initialize managers 
	InitializeManagers();
}

void ATurnBasedGameMode::StartPlay()
{
	Super::StartPlay();
}

void ATurnBasedGameMode::LoadAllGameData()
{
	//Load Board Data
	UTurnBasedGameGameInstance* GameInstance = Cast<UTurnBasedGameGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GameInstance)
		BoardDataSubSystem = GameInstance->GetSubsystem<USSBoardData>();
}

void ATurnBasedGameMode::InitializeManagers()
{
	//Creation of managers
	MapLoaderManager = NewObject<UMapLoaderManager>(GetTransientPackage());

	//Initialization of managers
	if (MapLoaderManager)
		MapLoaderManager->Initialize(BoardDataSubSystem->GetBoardData());
	
}

