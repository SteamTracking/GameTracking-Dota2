// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocTargetSelectorNode",
//	"m_ID": <HIDDEN FOR DIFF>,
//	"m_name": "",
//	"m_floatingComment": "",
//	"m_position":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_pChildGraph": null,
//	"m_pSecondaryGraph": null,
//	"m_inputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Target",
//			"m_type": "Target",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Option",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Option",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Pose",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_optionLabels":
//	[
//		"Option",
//		"Option"
//	],
//	"m_flOrientationScoreWeight": 1.000000,
//	"m_flPositionScoreWeight": 1.000000,
//	"m_bIsWorldSpaceTarget": true,
//	"m_bIgnoreInvalidOptions": false
//}
class CNmGraphDocTargetSelectorNode : public CNmGraphDocFlowNode
{
	// MPropertyAutoExpandSelf
	// MPropertyResizable (UNKNOWN FOR PARSER)
	CUtlVector< CUtlString > m_optionLabels;
	float32 m_flOrientationScoreWeight;
	float32 m_flPositionScoreWeight;
	bool m_bIsWorldSpaceTarget;
	// MPropertyGroupName = "Advanced"
	// MPropertyDescription = "Should we ignore any invalid option and remove them from the selection. This is useful if different variations has different sets of options filled"
	bool m_bIgnoreInvalidOptions;
};
