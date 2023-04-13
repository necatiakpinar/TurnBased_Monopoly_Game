// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjectBoardPenalty.h"

// Sets default values
AObjectBoardPenalty::AObjectBoardPenalty()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObjectBoardPenalty::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjectBoardPenalty::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

