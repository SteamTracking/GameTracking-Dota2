// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocIDSelectorNode",
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
//			"m_name": "ID",
//			"m_type": "Bool",
//			"m_bIsDynamicPin": true,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "ID",
//			"m_type": "Bool",
//			"m_bIsDynamicPin": true,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Result",
//			"m_type": "ID",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_options":
//	[
//		"ID",
//		"ID"
//	],
//	"m_defaultID": ""
//}
class CNmGraphDocIDSelectorNode : public CNmGraphDocFlowNode
{
	// MPropertyAutoExpandSelf
	// MPropertyResizable (UNKNOWN FOR PARSER)
	// MPropertyAttributeEditor = "AnimGraphID()"
	CUtlVector< CGlobalSymbol > m_options;
	// MPropertyAttributeEditor = "AnimGraphID()"
	CGlobalSymbol m_defaultID;
};
