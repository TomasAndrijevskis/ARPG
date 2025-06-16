

using UnrealBuildTool;
using System.Collections.Generic;

public class Course_ARPGTarget : TargetRules
{
	public Course_ARPGTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Course_ARPG" } );
	}
}
