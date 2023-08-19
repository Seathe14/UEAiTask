// Copyright Epic Games, Inc. All Rights Reserved.

#include "AITaskGameMode.h"
#include "AITaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAITaskGameMode::AAITaskGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
