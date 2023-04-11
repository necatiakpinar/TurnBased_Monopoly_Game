// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SSBoardData.generated.h"

/**
 * 
 */
class UDataTable;

UCLASS(Blueprintable)
class TURNBASEDGAME_API USSBoardData : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	int TestNumber;

	FORCEINLINE UDataTable* GetBoardData() const { return BoardData;}
	
private:
	UPROPERTY()
	UDataTable* BoardData;
};
