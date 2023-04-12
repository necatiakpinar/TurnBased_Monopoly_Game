// Fill out your copyright notice in the Description page of Project Settings.


#include "SSMapLoader.h"

#include "Kismet/GameplayStatics.h"
#include "TurnBasedGame/GameModes/TurnBasedGameGameInstance.h"
#include "TurnBasedGame/GameModes/TurnBasedGameMode.h"

void USSMapLoader::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

}

void USSMapLoader::Deinitialize()
{
	Super::Deinitialize();
}

void USSMapLoader::CreateLevel(USSBoardData* BoardData)
{

}


