// Fill out your copyright notice in the Description page of Project Settings.


#include "MapLoaderManager.h"

#include "Kismet/GameplayStatics.h"
#include "TurnBasedGame/GameModes/TurnBasedGameGameInstance.h"
#include "TurnBasedGame/Subsystems/SSBoardData.h"

void UMapLoaderManager::Initialize(UDataTable* BoardDataTableObject)
{
		BoardDataTable = BoardDataTableObject;
}
