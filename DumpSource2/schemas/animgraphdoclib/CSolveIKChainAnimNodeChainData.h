// MGetKV3ClassDefaults = {
//	"_class": "CSolveIKChainAnimNodeChainData",
//	"m_IkChain": "",
//	"m_SolverSettingSource": "SOLVEIKCHAINANIMNODESETTINGSOURCE_Default",
//	"m_OverrideSolverSettings":
//	{
//		"m_SolverType": "IKSOLVER_TwoBone",
//		"m_nNumIterations": 6,
//		"m_EndEffectorRotationFixUpMode": "MatchTargetOrientation"
//	},
//	"m_TargetSettingSource": "SOLVEIKCHAINANIMNODESETTINGSOURCE_Default",
//	"m_OverrideTargetSettings":
//	{
//		"m_TargetSource": "Bone",
//		"m_Bone":
//		{
//			"m_Name": ""
//		},
//		"m_AnimgraphParameterNamePosition":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_AnimgraphParameterNameOrientation":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_TargetCoordSystem": "World Space"
//	},
//	"m_DebugSetting": "SOLVEIKCHAINANIMNODEDEBUGSETTING_None",
//	"m_flDebugNormalizedLength": 1.000000,
//	"m_vDebugOffset":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	]
//}
// MPropertyElementNameFn (UNKNOWN FOR PARSER)
class CSolveIKChainAnimNodeChainData
{
	// MPropertyFriendlyName = "IK Chain"
	// MPropertyAttributeChoiceName = "IKChain"
	CUtlString m_IkChain;
	// MPropertyFriendlyName = "Solver Setting Source"
	// MPropertyAutoRebuildOnChange
	SolveIKChainAnimNodeSettingSource m_SolverSettingSource;
	// MPropertyFriendlyName = "Override Solver Settings"
	// MPropertyAutoExpandSelf
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	IKSolverSettings_t m_OverrideSolverSettings;
	// MPropertyFriendlyName = "Target Setting Source"
	// MPropertyAutoRebuildOnChange
	SolveIKChainAnimNodeSettingSource m_TargetSettingSource;
	// MPropertyFriendlyName = "Override Target Settings"
	// MPropertyAutoExpandSelf
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	IKTargetSettings_t m_OverrideTargetSettings;
	// MPropertyFriendlyName = "Debug Setting"
	// MPropertyGroupName = "Debug"
	SolveIKChainAnimNodeDebugSetting m_DebugSetting;
	// MPropertyFriendlyName = "Debug Normalized Length"
	// MPropertyGroupName = "Debug"
	float32 m_flDebugNormalizedLength;
	// MPropertyFriendlyName = "Debug Offset"
	// MPropertyGroupName = "Debug"
	Vector m_vDebugOffset;
};
