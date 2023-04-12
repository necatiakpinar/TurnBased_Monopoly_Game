// Fill out your copyright notice in the Description page of Project Settings.


#include "SSBoardData.h"

#include "AssetToolsModule.h"
#include "AssetRegistry/AssetRegistryHelpers.h"
#include "Engine/DataTable.h"
#include "Kismet/GameplayStatics.h"
#include "TurnBasedGame/BoardArea/BoardProperty.h"
#include "TurnBasedGame/DataTables/DTBoardAreaTypes.h"
#include "TurnBasedGame/GameModes/TurnBasedGameMode.h"
#include "TurnBasedGame/Objects/ObjectBoardCard.h"

void USSBoardData::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	FString DataTableReference = "/Game/DataTables/DT_BoardAreaData";
	BoardData = LoadObject<UDataTable>(NULL, *DataTableReference, NULL, LOAD_None, NULL);
	TestNumber = 1234;
	
}

void USSBoardData::Deinitialize()
{
	Super::Deinitialize();
}
