// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocIDComparisonNode",
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
//			"m_type": "Bool",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_comparison": "Matches",
//	"m_values":
//	[
//		""
//	]
//}
class CNmGraphDocIDComparisonNode : public CNmGraphDocFlowNode
{
	CNmIDComparisonNode::Comparison_t m_comparison;
	// MPropertyAttributeEditor = "AnimGraphID()"
	// MPropertyAutoExpandSelf
	CUtlVector< CGlobalSymbol > m_values;
};
