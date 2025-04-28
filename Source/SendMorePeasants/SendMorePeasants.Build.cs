// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SendMorePeasants : ModuleRules
{
	public SendMorePeasants(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
