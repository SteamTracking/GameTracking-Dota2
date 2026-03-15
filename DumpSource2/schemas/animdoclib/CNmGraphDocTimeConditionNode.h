// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocTimeConditionNode",
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
//			"m_name": "Time Value (optional)",
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
//	"m_flComparand": 0.000000,
//	"m_type": "ElapsedTime",
//	"m_operator": "LessThan"
//}
class CNmGraphDocTimeConditionNode : public CNmGraphDocFlowNode
{
	float32 m_flComparand;
	CNmTimeConditionNode::ComparisonType_t m_type;
	CNmTimeConditionNode::Operator_t m_operator;
};
