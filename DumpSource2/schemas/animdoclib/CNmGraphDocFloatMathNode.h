// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocFloatMathNode",
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
//			"m_name": "A",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "B (Optional)",
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
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_bReturnAbsoluteResult": false,
//	"m_bReturnNegatedResult": false,
//	"m_operator": "Add",
//	"m_flValueB": 0.000000
//}
class CNmGraphDocFloatMathNode : public CNmGraphDocFlowNode
{
	// MPropertyDescription = "Should we apply an abs to the result (is performed before we take into account the negate option)"
	bool m_bReturnAbsoluteResult;
	// MPropertyDescription = "Should we negate the result (absolute value will be performed before negation)"
	bool m_bReturnNegatedResult;
	CNmFloatMathNode::Operator_t m_operator;
	float32 m_flValueB;
};
