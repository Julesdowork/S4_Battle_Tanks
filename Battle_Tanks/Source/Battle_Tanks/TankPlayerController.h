// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLE_TANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	ATank* GetControlledTank() const;
};
