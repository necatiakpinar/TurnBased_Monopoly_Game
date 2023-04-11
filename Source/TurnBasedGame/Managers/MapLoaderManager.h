// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapLoaderManager.generated.h"

class USSBoardData;

class UDataTable;

UCLASS()
class TURNBASEDGAME_API UMapLoaderManager : public UObject
{
	GENERATED_BODY()

	
public:
	void Initialize(UDataTable* BoardDataTableObject);
		
private:
	UDataTable* BoardDataTable;
};
