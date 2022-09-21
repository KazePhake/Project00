// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project00 : ModuleRules
{
	public Project00(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
