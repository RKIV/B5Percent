// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "B6PercentGameMode.h"
#include "B6PercentPlayerController.h"
#include "B6PercentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AB6PercentGameMode::AB6PercentGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AB6PercentPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}