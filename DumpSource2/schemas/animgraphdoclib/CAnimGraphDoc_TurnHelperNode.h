// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_TurnHelperNode",
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
//	"m_facingTarget": "LookHeading",
//	"m_turnStartTime": 0.000000,
//	"m_turnDuration": 1.000000,
//	"m_bMatchChildDuration": true,
//	"m_bUseManualTurnOffset": false,
//	"m_manualTurnOffset": 0.000000
//}
// MPropertyFriendlyName = "Turn Helper"
class CAnimGraphDoc_TurnHelperNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Turn to Face"
	AnimValueSource m_facingTarget;
	// MPropertyFriendlyName = "Turn Start Time"
	float32 m_turnStartTime;
	// MPropertyFriendlyName = "Turn Duration"
	float32 m_turnDuration;
	// MPropertyFriendlyName = "Match Child Duration"
	bool m_bMatchChildDuration;
	// MPropertyFriendlyName = "Use Manual Turn Offset"
	bool m_bUseManualTurnOffset;
	// MPropertyFriendlyName = "Manual Turn Offset"
	float32 m_manualTurnOffset;
};
