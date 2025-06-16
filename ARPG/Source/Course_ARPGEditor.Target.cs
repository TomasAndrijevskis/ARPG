

using UnrealBuildTool;
using System.Collections.Generic;

public class Course_ARPGEditorTarget : TargetRules
{
	public Course_ARPGEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;

		ExtraModuleNames.AddRange( new string[] { "Course_ARPG" } );
	}
}
