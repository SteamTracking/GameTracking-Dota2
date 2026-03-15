// MGetKV3ClassDefaults = {
//	"_class": "CnmGraphDocConstTargetNode",
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
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Value",
//			"m_type": "Target",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_rotation":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_translation":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	]
//}
class CnmGraphDocConstTargetNode : public CNmGraphDocFlowNode
{
	QAngle m_rotation;
	Vector m_translation;
};
