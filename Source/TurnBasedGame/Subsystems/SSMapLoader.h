// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TurnBasedGame/Enums/WorldObjectTypes.h"
#include "SSMapLoader.generated.h"

class AObjectBoardCard;
class UBaseBoardArea;
class USSBoardData;

class UDataTable;
struct FBoardAreaData;

UCLASS()
class TURNBASEDGAME_API USSMapLoader : public UGameInstanceSubsystem
{
	GENERATED_BODY()
private:
	TArray<FBoardAreaData*> AllAreaDatas;
	TArray<AObjectBoardCard*> AllBoardAreas;
	TArray<EBoardAreaType> LevelAreaTypes;
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	
	void CreateLevel(UDataTable* BoardData);
	
private:
	AObjectBoardCard* CreateObjectBoardCard(EBoardAreaType BoardAreaType);
	FBoardAreaData* GetBoardAreaData(EBoardAreaType BoardAreaType);
};