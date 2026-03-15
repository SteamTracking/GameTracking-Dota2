// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocFloatComparisonNode",
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
//			"m_name": "Float",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Comparand (Optional)",
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
//			"m_type": "Bool",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_comparison": "GreaterThanEqual",
//	"m_flComparisonValue": 0.000000,
//	"m_flEpsilon": 0.000000
//}
class CNmGraphDocFloatComparisonNode : public CNmGraphDocFlowNode
{
	CNmFloatComparisonNode::Comparison_t m_comparison;
	float32 m_flComparisonValue;
	float32 m_flEpsilon;
};
