// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocGraphEventConditionNode",
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
//			"m_name": "Result",
//			"m_type": "Bool",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_operator": "Or",
//	"m_bLimitSearchToSourceState": false,
//	"m_bIgnoreInactiveBranchEvents": false,
//	"m_conditions":
//	[
//		{
//			"m_eventID": "",
//			"m_type": "Any"
//		}
//	]
//}
class CNmGraphDocGraphEventConditionNode : public CNmGraphDocFlowNode
{
	NmEventConditionOperator_t m_operator;
	// MPropertyGroupName = "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState;
	// MPropertyGroupName = "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents;
	// MPropertyGroupName = "+Conditions"
	// MPropertyAutoExpandSelf
	CUtlVector< CNmGraphDocGraphEventConditionNode::Condition_t > m_conditions;
};
