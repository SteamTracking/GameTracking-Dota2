// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocClipNode",
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
//			"m_name": "Play In Reverse",
//			"m_type": "Bool",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Reset Time",
//			"m_type": "Bool",
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
//	"m_pDefaultVariationData":
//	{
//		"_class": "CNmGraphDocClipNode::CData",
//		"m_clip": "",
//		"m_flSpeedMultiplier": 1.000000,
//		"m_nStartSyncEventOffset": 0
//	},
//	"m_overrides":
//	[
//	],
//	"m_defaultResourceName": "",
//	"m_bSampleRootMotion": true,
//	"m_bAllowLooping": false,
//	"m_graphEvents":
//	[
//	]
//}
class CNmGraphDocClipNode : public CNmGraphDocVariationDataNode
{
	bool m_bSampleRootMotion;
	bool m_bAllowLooping;
	// MPropertyGroupName = "Advanced"
	// MPropertyAttributeEditor = "AnimGraphID()"
	// MPropertyAutoExpandSelf
	CUtlVector< CGlobalSymbol > m_graphEvents;
};
