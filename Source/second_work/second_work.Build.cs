// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class second_work : ModuleRules
{
	public second_work(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
