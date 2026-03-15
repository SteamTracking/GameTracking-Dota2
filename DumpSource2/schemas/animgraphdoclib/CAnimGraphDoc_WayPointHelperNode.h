// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_WayPointHelperNode",
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
//	"m_flStartCycle": 0.000000,
//	"m_flEndCycle": 0.000000,
//	"m_bOnlyGoals": true,
//	"m_bPreventOvershoot": true,
//	"m_bPreventUndershoot": false
//}
// MPropertyFriendlyName = "WayPoint Helper"
class CAnimGraphDoc_WayPointHelperNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Start Cycle"
	// MPropertyAttributeRange = "0 1"
	float32 m_flStartCycle;
	// MPropertyFriendlyName = "End Cycle"
	// MPropertyAttributeRange = "0 1"
	float32 m_flEndCycle;
	// MPropertyFriendlyName = "Only align to Goals"
	bool m_bOnlyGoals;
	// MPropertyFriendlyName = "Prevent Overshoot"
	bool m_bPreventOvershoot;
	// MPropertyFriendlyName = "Prevent Undershoot"
	bool m_bPreventUndershoot;
};
