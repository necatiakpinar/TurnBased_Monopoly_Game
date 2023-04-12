// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBoardArea.h"

// Sets default values
UBaseBoardArea::UBaseBoardArea()
{

}

void UBaseBoardArea::Initialize(EBoardAreaType boardAreaType)
{
	BoardAreaType = boardAreaType;
}
