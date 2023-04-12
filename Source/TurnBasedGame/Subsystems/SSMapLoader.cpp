// Fill out your copyright notice in the Description page of Project Settings.


#include "SSMapLoader.h"

#include "Engine/DataTable.h"
#include "Kismet/GameplayStatics.h"
#include "TurnBasedGame/BoardArea/BoardProperty.h"
#include "TurnBasedGame/BoardArea/BoardPublicFund.h"
#include "TurnBasedGame/DataTables/DTBoardAreaTypes.h"
#include "TurnBasedGame/GameModes/TurnBasedGameGameInstance.h"
#include "TurnBasedGame/GameModes/TurnBasedGameMode.h"
#include "TurnBasedGame/Objects/ObjectBoardCard.h"

void USSMapLoader::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	LevelAreaTypes = {EBoardAreaType::PublicFund, EBoardAreaType::PublicFund, EBoardAreaType::Property, EBoardAreaType::Property , EBoardAreaType::PublicFund};
}

void USSMapLoader::Deinitialize()
{
	Super::Deinitialize();
}

void USSMapLoader::CreateLevel(UDataTable* BoardData)
{
	AllBoardAreas = {};
	BoardData->GetAllRows<FBoardAreaData>("",AllAreaDatas);
	AObjectBoardCard* ObjectBoardCard = nullptr;
	for (int i = 0; i < LevelAreaTypes.Num(); i++)
	{
		ObjectBoardCard = CreateObjectBoardCard(LevelAreaTypes[i]);
		AllBoardAreas.Add(ObjectBoardCard);
	}
	
}

AObjectBoardCard* USSMapLoader::CreateObjectBoardCard(EBoardAreaType BoardAreaType)
{
	AObjectBoardCard* BoardCard = nullptr;
	FBoardAreaData* BoardAreaData = GetBoardAreaData(BoardAreaType);

	if (BoardAreaData)
	{
		if (BoardAreaData->BoardAreaType == EBoardAreaType::Property)
		{
			UBoardProperty* BoardProperty = NewObject<UBoardProperty>(GetTransientPackage());
			BoardProperty->Initialize(BoardAreaData->BoardAreaType);

			BoardCard = GetWorld()->SpawnActor<AObjectBoardCard>(BoardAreaData->BoardCard, FVector(0,0,0), FRotator::ZeroRotator);
			BoardCard->Initialize(BoardProperty);
		}
		else if (BoardAreaData->BoardAreaType == EBoardAreaType::PublicFund)
		{
			UBoardPublicFund* BoardPublicFund = NewObject<UBoardPublicFund>(GetTransientPackage());
			BoardPublicFund->Initialize(BoardAreaData->BoardAreaType);
			
			BoardCard = GetWorld()->SpawnActor<AObjectBoardCard>(BoardAreaData->BoardCard, FVector(0,0,0), FRotator::ZeroRotator);
			BoardCard->Initialize(BoardPublicFund);
		}
	}
	
	return BoardCard;
}

FBoardAreaData* USSMapLoader::GetBoardAreaData(EBoardAreaType BoardAreaType)
{
	for (FBoardAreaData* areaData : AllAreaDatas)
		if (areaData->BoardAreaType == BoardAreaType)
			return areaData;

	return nullptr;
}


