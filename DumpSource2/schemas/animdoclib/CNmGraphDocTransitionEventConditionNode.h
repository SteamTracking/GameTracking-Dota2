// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocTransitionEventConditionNode",
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
//	"m_ruleCondition": "AnyAllowed",
//	"m_bMatchOnlySpecificMarkerID": false,
//	"m_markerIDToMatch": "",
//	"m_bLimitSearchToSourceState": false,
//	"m_bIgnoreInactiveBranchEvents": false
//}
class CNmGraphDocTransitionEventConditionNode : public CNmGraphDocFlowNode
{
	NmTransitionRuleCondition_t m_ruleCondition;
	bool m_bMatchOnlySpecificMarkerID;
	// MPropertyAttributeEditor = "AnimGraphID()"
	CGlobalSymbol m_markerIDToMatch;
	// MPropertyGroupName = "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState;
	// MPropertyGroupName = "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents;
};
