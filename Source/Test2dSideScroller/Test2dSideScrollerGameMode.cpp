// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test2dSideScrollerGameMode.h"
#include "Test2dSideScrollerCharacter.h"

ATest2dSideScrollerGameMode::ATest2dSideScrollerGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ATest2dSideScrollerCharacter::StaticClass();	
}
