// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "GameFramework/PlayerController.h"
#include "CardPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class CARDGAME_API ACardPlayerController : public APlayerController
{
	GENERATED_BODY()
	
	public:
		ACardPlayerController();
	
		UPROPERTY(BlueprintReadWrite)
		int Score = 0;

	UPROPERTY(BlueprintReadWrite)
	TArray<ACard> Hand;
	UPROPERTY(BlueprintReadWrite)
	TArray<ACard> Board;

	UPROPERTY(BlueprintReadWrite)
	bool bHold = false;

};
