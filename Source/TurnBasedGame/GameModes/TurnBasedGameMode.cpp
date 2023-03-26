// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnBasedGameMode.h"
#include "TurnBasedGame/Managers/MapLoaderManager.h"

void ATurnBasedGameMode::InitGameState()
{
	Super::InitGameState();
}

void ATurnBasedGameMode::StartPlay()
{
	Super::StartPlay();
	InitializeManagers();
	
}

void ATurnBasedGameMode::InitializeManagers()
{
	//Creation of managers
	MapLoaderManager = NewObject<UMapLoaderManager>(GetTransientPackage());
	
	//Initialization of managers
	if (MapLoaderManager)
		MapLoaderManager->Initialize();
	
}
