// Copyright OA515 Games.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h"

// Forward Declarations
class UTankBarrel;
class UTankTurret;
class AProjectile;

UCLASS()
class BATTLE_TANKS_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void Fire();

private:
	// TODO remove once firing is moved to Aiming Component
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float LaunchSpeed = 4000;

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;

	UTankBarrel* Barrel = nullptr;		// Local barrel reference for spawning projectiles

	UPROPERTY(EditDefaultsOnly)
	float ReloadTimeInSeconds = 3;

	double LastFireTime = 0;
};
