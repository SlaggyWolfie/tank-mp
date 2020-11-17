// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class tank_mp : ModuleRules
{
	public tank_mp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
