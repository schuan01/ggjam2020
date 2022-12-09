// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GGJ2020GameMode.h"
#include "GGJ2020Character.h"
#include "UObject/ConstructorHelpers.h"

AGGJ2020GameMode::AGGJ2020GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
