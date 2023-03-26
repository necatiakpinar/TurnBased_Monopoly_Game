// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "ObjectBoardCard.generated.h"


class UBaseBoardArea;
UCLASS()
class TURNBASEDGAME_API AObjectBoardCard : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	UStaticMeshComponent* CardMeshComponent;

private:
	UPROPERTY()
	UBaseBoardArea* BoardItem;

	
public:	
	// Sets default values for this actor's properties
	AObjectBoardCard();
	void Initialize(UBaseBoardArea* boardItem);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
