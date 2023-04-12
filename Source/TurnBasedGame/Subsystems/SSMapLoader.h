// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SSMapLoader.generated.h"

class USSBoardData;
/**
 * 
 */
UCLASS()
class TURNBASEDGAME_API USSMapLoader : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	void CreateLevel(USSBoardData* BoardData);
};
