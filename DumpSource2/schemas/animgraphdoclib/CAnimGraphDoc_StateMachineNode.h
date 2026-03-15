// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_StateMachineNode",
//	"m_sName": "Unnamed",
//	"m_vecPosition":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_nNodeID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bDebugThisNode": false,
//	"m_networkMode": "ServerAuthoritative",
//	"m_states":
//	[
//	],
//	"m_bBlockWaningTags": false,
//	"m_bLockStateWhenWaning": false,
//	"m_bResetWhenActivated": false
//}
// MPropertyFriendlyName = "State Machine"
class CAnimGraphDoc_StateMachineNode : public CAnimGraphDoc_Node, public CAnimGraphDoc_StateMachine
{
	// MPropertyFriendlyName = "Block Tags from Waning States"
	bool m_bBlockWaningTags;
	// MPropertyFriendlyName = "Lock When Waning"
	bool m_bLockStateWhenWaning;
	// MPropertyFriendlyName = "Reset When Activated"
	bool m_bResetWhenActivated;
};
