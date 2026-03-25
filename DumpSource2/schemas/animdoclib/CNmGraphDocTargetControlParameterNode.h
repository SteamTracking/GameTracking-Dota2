// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocTargetControlParameterNode",
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
//	"m_groupName": "",
//	"m_dictionaryParameterBinding": "00000000-0000-0000-0000-000000000000",
//	"m_bIsSet": false,
//	"m_bIsBoneID": false,
//	"m_targetOrientation":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_targetPosition":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_previewStartBoneID": ""
//}
class CNmGraphDocTargetControlParameterNode : public CNmGraphDocControlParameterNode
{
	bool m_bIsSet;
	bool m_bIsBoneID;
	QAngle m_targetOrientation;
	Vector m_targetPosition;
	CGlobalSymbol m_previewStartBoneID;
};
