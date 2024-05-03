// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AI_creating : ModuleRules
{
	public AI_creating(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
