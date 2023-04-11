// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"

#include "GameModes/TurnBasedGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Subsystems/SSBoardData.h"

AMainPlayer::AMainPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	MoveSpeed = 500.f;
}

void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	GameMode = Cast<ATurnBasedGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	
	if (GameMode)
		if (GameMode->GetBoardData())
			UE_LOG(LogTemp, Warning, TEXT("%d"), GameMode->GetBoardData()->TestNumber);
			
}

void AMainPlayer::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// Handle movement based on our "MoveX" and "MoveY" axes
	{
		if (!CurrentVelocity.IsZero())
		{
			FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaSeconds);
			SetActorLocation(NewLocation);
		}
	}
}

void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMainPlayer::Jump);

	InputComponent->BindAxis("MoveX", this, &AMainPlayer::MoveXAxis);
	InputComponent->BindAxis("MoveY", this, &AMainPlayer::MoveYAxis);

}

void AMainPlayer::MoveXAxis(float AxisValue)
{
	CurrentVelocity.X = FMath::Clamp(AxisValue,-1.0,1.0f) * MoveSpeed;
}

void AMainPlayer::MoveYAxis(float AxisValue)
{
	CurrentVelocity.Y = FMath::Clamp(AxisValue,-1.0,1.0f) * MoveSpeed;
}

void AMainPlayer::Jump()
{
}
