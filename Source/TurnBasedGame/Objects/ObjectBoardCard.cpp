// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectBoardCard.h"
#include "TurnBasedGame/BoardArea/BaseBoardArea.h"
#include "TurnBasedGame/BoardArea/BoardProperty.h"

// Sets default values
AObjectBoardCard::AObjectBoardCard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CardMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	
	SetRootComponent(CardMeshComponent);

}

void AObjectBoardCard::Initialize(UBaseBoardArea* boardItem)
{
	BoardItem = boardItem;
}

// Called when the game starts or when spawned
void AObjectBoardCard::BeginPlay()
{
	Super::BeginPlay();
}


