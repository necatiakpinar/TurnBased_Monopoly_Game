// Fill out your copyright notice in the Description page of Project Settings.


#include "SSBoardData.h"

#include "AssetToolsModule.h"
#include "AssetRegistry/AssetRegistryHelpers.h"
#include "Engine/DataTable.h"
#include "TurnBasedGame/DataTables/DTBoardAreaTypes.h"

void USSBoardData::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	FString DataTableReference = "/Game/DataTables/DT_BoardAreas";
	BoardData = LoadObject<UDataTable>(NULL, *DataTableReference, NULL, LOAD_None, NULL);

	if(BoardData)
	{
		TestNumber = 2131321;
		//FBoardAreaTypes* BoardAreaTypes = BoardData->FindRow<FBoardAreaTypes>("BoardProperty","");
	}
}

void USSBoardData::Deinitialize()
{
	Super::Deinitialize();
}
