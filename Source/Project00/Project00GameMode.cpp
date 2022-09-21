// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project00GameMode.h"
#include "Project00Character.h"
#include "UObject/ConstructorHelpers.h"

AProject00GameMode::AProject00GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
