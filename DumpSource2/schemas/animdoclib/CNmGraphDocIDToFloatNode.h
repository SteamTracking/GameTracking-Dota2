// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocIDToFloatNode",
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
//			"m_type": "ID",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Result",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_defaultValue": 0.000000,
//	"m_mappings":
//	[
//	]
//}
class CNmGraphDocIDToFloatNode : public CNmGraphDocFlowNode
{
	float32 m_defaultValue;
	// MPropertyAutoExpandSelf
	CUtlVector< CNmGraphDocIDToFloatNode::Mapping_t > m_mappings;
};
