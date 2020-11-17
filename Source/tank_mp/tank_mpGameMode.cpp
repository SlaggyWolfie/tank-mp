// Copyright Epic Games, Inc. All Rights Reserved.

#include "tank_mpGameMode.h"
#include "tank_mpCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atank_mpGameMode::Atank_mpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
