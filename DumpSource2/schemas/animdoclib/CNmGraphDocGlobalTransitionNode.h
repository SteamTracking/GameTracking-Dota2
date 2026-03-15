// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocGlobalTransitionNode",
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
//			"m_name": "Condition",
//			"m_type": "Bool",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Duration Override",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Time Offset Override",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Start Bone Mask",
//			"m_type": "BoneMask",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Target Sync ID",
//			"m_type": "ID",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_outputPins":
//	[
//	],
//	"m_resultType": "Special",
//	"m_flDurationSeconds": 0.200000,
//	"m_bClampDurationToSource": false,
//	"m_rootMotionBlend": "Blend",
//	"m_blendWeightEasing": "Linear",
//	"m_flBoneMaskBlendInTimePercentage": 0.330000,
//	"m_timeMatchMode": "None",
//	"m_flTimeOffset": 0.000000,
//	"m_bCanBeForced": false,
//	"m_stateID": <HIDDEN FOR DIFF>,
//}
class CNmGraphDocGlobalTransitionNode : public CNmGraphDocTransitionNode
{
	// MPropertySuppressField
	V_uuid_t m_stateID;
};
