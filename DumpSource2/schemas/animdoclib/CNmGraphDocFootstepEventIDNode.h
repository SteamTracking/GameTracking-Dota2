// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocFootstepEventIDNode",
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
//			"m_name": "ID",
//			"m_type": "ID",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_priorityRule": "HighestWeight",
//	"m_bLimitSearchToSourceState": false,
//	"m_bIgnoreInactiveBranchEvents": false
//}
class CNmGraphDocFootstepEventIDNode : public CNmGraphDocFlowNode
{
	// MPropertyGroupName = "+Advanced Search Rules"
	NmEventPriorityRule_t m_priorityRule;
	// MPropertyGroupName = "+Advanced Search Rules"
	bool m_bLimitSearchToSourceState;
	// MPropertyGroupName = "+Advanced Search Rules"
	bool m_bIgnoreInactiveBranchEvents;
};
