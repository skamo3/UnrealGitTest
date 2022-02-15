// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GitTestPrj : ModuleRules
{
	public GitTestPrj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
