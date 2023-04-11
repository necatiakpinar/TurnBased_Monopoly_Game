// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DTBoardAreaTypes.generated.h"

class AObjectBoardCard;

USTRUCT(BlueprintType)
struct FBoardAreaTypes : public FTableRowBase
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TSubclassOf<AObjectBoardCard> BoardCard;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 BoardID;
};

UCLASS(Blueprintable)
class TURNBASEDGAME_API UDTBoardAreaTypes : public UDataTable
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	FString BoardCards; 
	
};
