// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocFloatControlParameterNode",
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
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_groupName": "",
//	"m_dictionaryParameterBinding": "00000000-0000-0000-0000-000000000000",
//	"m_previewStartValue": 0.000000,
//	"m_previewMin": 0.000000,
//	"m_previewMax": 1.000000
//}
class CNmGraphDocFloatControlParameterNode : public CNmGraphDocControlParameterNode
{
	float32 m_previewStartValue;
	float32 m_previewMin;
	float32 m_previewMax;
};
