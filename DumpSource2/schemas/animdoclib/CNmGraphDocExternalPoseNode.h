// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocExternalPoseNode",
//	"m_ID": <HIDDEN FOR DIFF>,
//	"m_name": "External Pose",
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
//	"m_bShouldSampleRootMotion": false
//}
class CNmGraphDocExternalPoseNode : public CNmGraphDocFlowNode
{
	bool m_bShouldSampleRootMotion;
};
