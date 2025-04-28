// Copyright Epic Games, Inc. All Rights Reserved.

#include "SendMorePeasantsGameMode.h"
#include "SendMorePeasantsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASendMorePeasantsGameMode::ASendMorePeasantsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
