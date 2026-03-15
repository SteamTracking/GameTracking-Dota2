// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocAnimationPoseNode",
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
//			"m_name": "Time",
//			"m_type": "Float",
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
//		"_class": "CNmGraphDocAnimationPoseNode::CData",
//		"m_clip": "",
//		"m_variationTimeValue": -1.000000
//	},
//	"m_overrides":
//	[
//	],
//	"m_defaultResourceName": "",
//	"m_inputTimeRemapRange":
//	{
//		"m_flMin": 340282346638528859811704183484516925440.000000,
//		"m_flMax": -340282346638528859811704183484516925440.000000
//	},
//	"m_fixedTimeValue": 0.000000,
//	"m_useFramesAsInput": false
//}
class CNmGraphDocAnimationPoseNode : public CNmGraphDocVariationDataNode
{
	// MPropertyAttributeEditor = "RangeEditor()"
	Range_t m_inputTimeRemapRange;
	float32 m_fixedTimeValue;
	bool m_useFramesAsInput;
};
