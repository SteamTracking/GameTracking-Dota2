// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocOrientationWarpNode",
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
//			"m_name": "Direction (Character)",
//			"m_type": "Vector",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Angle Offset (Deg)",
//			"m_type": "Float",
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
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_offsetType": "RelativeToCharacter",
//	"m_samplingMode": "WorldSpace",
//	"m_bWarpTranslation": false
//}
class CNmGraphDocOrientationWarpNode : public CNmGraphDocFlowNode
{
	CNmGraphDocOrientationWarpNode::OffsetType_t m_offsetType;
	CNmRootMotionData::SamplingMode_t m_samplingMode;
	// MPropertyGroupName = "Experimental"
	// MPropertyDescription = "Should the translation curve change as the orientation is being warped?"
	bool m_bWarpTranslation;
};
