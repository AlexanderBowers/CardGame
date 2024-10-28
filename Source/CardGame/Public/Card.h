// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CardPlayerController.h"
#include "Card.generated.h"

UCLASS()
class CARDGAME_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadWrite)
	int value = 1;


	UPROPERTY(BlueprintReadWrite)
	FName Effect;

	UPROPERTY(BlueprintReadWrite)
	ACardPlayerController* Player = nullptr;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
