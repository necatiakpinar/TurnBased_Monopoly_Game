// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseBoardArea.h"
#include "BoardProperty.generated.h"

/**
 * 
 */
UCLASS()
class TURNBASEDGAME_API UBoardProperty : public UBaseBoardArea
{
	GENERATED_BODY()

public:
	int GetPropertyCount();
	
};
