// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocIDEventConditionNode",
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
//	"m_searchRule": "SearchAll",
//	"m_bLimitSearchToSourceState": false,
//	"m_bIgnoreInactiveBranchEvents": false,
//	"m_eventIDs":
//	[
//	]
//}
class CNmGraphDocIDEventConditionNode : public CNmGraphDocFlowNode
{
	NmEventConditionOperator_t m_operator;
	CNmGraphDocIDEventConditionNode::SearchRule_t m_searchRule;
	// MPropertyGroupName = "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState;
	// MPropertyGroupName = "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents;
	// MPropertyGroupName = "+Conditions"
	// MPropertyAttributeEditor = "AnimGraphID()"
	// MPropertyAutoExpandSelf
	CUtlVector< CGlobalSymbol > m_eventIDs;
};
