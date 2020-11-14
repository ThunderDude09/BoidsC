// Copyright Epic Games, Inc. All Rights Reserved.

#include "BoidsCGameMode.h"
#include "BoidsCPlayerController.h"
#include "BoidsCCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABoidsCGameMode::ABoidsCGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABoidsCPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}