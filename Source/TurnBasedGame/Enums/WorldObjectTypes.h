// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EBoardAreaType : uint8
{
	None UMETA(DisplayName = "NONE"),
	Property UMETA(DisplayName = "PROPERTY"),
	PublicFund UMETA(DisplayName = "PUBLICFUNC"),
	Penalty UMETA(DisplayName = "PENALTY"),
	Luck UMETA(DisplayName = "LUCK"),
	Corner UMETA(DisplayName = "CORNER"),
	Transportation UMETA(DisplayName = "TRANSPORTATION"),

	MAX UMETA(DisplayName = "MAX")
};