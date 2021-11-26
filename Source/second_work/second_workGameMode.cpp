// Copyright Epic Games, Inc. All Rights Reserved.

#include "second_workGameMode.h"
#include "second_workCharacter.h"
#include "UObject/ConstructorHelpers.h"

Asecond_workGameMode::Asecond_workGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
