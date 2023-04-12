// Fill out your copyright notice in the Description page of Project Settings.


#include "MapLoaderManager.h"

#include "Kismet/GameplayStatics.h"
#include "TurnBasedGame/BoardArea/BoardProperty.h"
#include "TurnBasedGame/DataTables/DTBoardAreaTypes.h"
#include "TurnBasedGame/GameModes/TurnBasedGameGameInstance.h"
#include "TurnBasedGame/Subsystems/SSBoardData.h"

void UMapLoaderManager::Initialize(UDataTable* BoardDataTableObject)
{
	BoardDataTable = BoardDataTableObject;

	TArray<FBoardAreaData*> AllAreaTypes;
	BoardDataTable->GetAllRows<FBoardAreaData>("",AllAreaTypes);

	for (FBoardAreaData* areaType : AllAreaTypes)
	{
		switch(areaType->BoardAreaType)
		{
		case EBoardAreaType::Property:
			//AObjectBoardCard* boardCard = GetWorld()->SpawnActor<AObjectBoardCard>(areaType->BoardCard, FVector(0,0,0), FRotator::ZeroRotator);
			//boardCard->Initialize(NewObject<UBoardProperty>());
			break;

		default:
			break;
		}
			
	}
}
