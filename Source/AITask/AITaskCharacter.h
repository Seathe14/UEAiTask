// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "AITaskCharacter.generated.h"


UCLASS(config=Game)
class AAITaskCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAITaskCharacter();

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

protected:
	
	virtual void BeginPlay();
};

