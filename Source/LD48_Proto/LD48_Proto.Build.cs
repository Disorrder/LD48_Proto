// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LD48_Proto : ModuleRules
{
	public LD48_Proto(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
