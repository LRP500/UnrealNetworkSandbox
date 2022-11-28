// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkSandboxGameMode.h"
#include "NetworkSandboxCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetworkSandboxGameMode::ANetworkSandboxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
