// Copyright Epic Games, Inc. All Rights Reserved.

#include "GrappledashGameMode.h"
#include "GrappledashCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGrappledashGameMode::AGrappledashGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
