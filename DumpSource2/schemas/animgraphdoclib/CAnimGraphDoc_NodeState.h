// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_NodeState",
//	"m_transitions":
//	[
//	],
//	"m_actions":
//	[
//	],
//	"m_name": "Unnamed",
//	"m_sComment": "",
//	"m_stateID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_position":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_bIsStartState": false,
//	"m_bIsEndtState": false,
//	"m_bIsInputToGraph": true,
//	"m_bIsPassthrough": false,
//	"m_bIsPassthroughRootMotion": false,
//	"m_bPreEvaluatePassthroughTransitionPath": false,
//	"m_inputConnection":
//	{
//		"m_nodeID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_outputID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		}
//	},
//	"m_bIsRootMotionExclusive": false,
//	"m_bIsRootMotionExclusiveFirstFrame": false
//}
class CAnimGraphDoc_NodeState : public CAnimGraphDoc_State
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Exclusive Root Motion"
	// MPropertySortPriority = 0
	bool m_bIsRootMotionExclusive;
	// MPropertyFriendlyName = "Exclusive Root Motion On First Frame"
	// MPropertySortPriority = 0
	bool m_bIsRootMotionExclusiveFirstFrame;
};
