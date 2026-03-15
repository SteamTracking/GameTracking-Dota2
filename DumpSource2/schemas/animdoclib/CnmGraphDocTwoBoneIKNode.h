// MGetKV3ClassDefaults = {
//	"_class": "CnmGraphDocTwoBoneIKNode",
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
//			"m_type": "Target",
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
//		"_class": "CnmGraphDocTwoBoneIKNode::CData",
//		"m_effectorBoneName": "",
//		"m_flBlendTimeSeconds": 0.000000
//	},
//	"m_overrides":
//	[
//	],
//	"m_defaultResourceName": "",
//	"m_bIsTargetInWorldSpace": false,
//	"m_blendMode": "Effector",
//	"m_flReferencePoseTwistWeight": 0.000000
//}
class CnmGraphDocTwoBoneIKNode : public CNmGraphDocVariationDataNode
{
	bool m_bIsTargetInWorldSpace;
	NmIKBlendMode_t m_blendMode;
	float32 m_flReferencePoseTwistWeight;
};
