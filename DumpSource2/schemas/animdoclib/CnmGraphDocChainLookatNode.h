// MGetKV3ClassDefaults = {
//	"_class": "CnmGraphDocChainLookatNode",
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
//			"m_name": "Input",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Target",
//			"m_type": "Vector",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Enabled",
//			"m_type": "Bool",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Result",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_pDefaultVariationData":
//	{
//		"_class": "CnmGraphDocChainLookatNode::CData",
//		"m_chainEndBoneName": "",
//		"m_chainForwardDir":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_nChainLength": 2,
//		"m_flBlendTimeSeconds": 0.000000
//	},
//	"m_overrides":
//	[
//	],
//	"m_defaultResourceName": "",
//	"m_bIsTargetInWorldSpace": false
//}
class CnmGraphDocChainLookatNode : public CNmGraphDocVariationDataNode
{
	bool m_bIsTargetInWorldSpace;
};
