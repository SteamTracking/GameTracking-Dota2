// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_StopAtGoalNode",
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
//	"m_flOuterRadius": 120.000000,
//	"m_flInnerRadius": 40.000000,
//	"m_flMaxScale": 1.500000,
//	"m_flMinScale": 0.500000,
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	}
//}
// MPropertyFriendlyName = "Stop At Goal"
class CAnimGraphDoc_StopAtGoalNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Outer Stopping Radius"
	float32 m_flOuterRadius;
	// MPropertyFriendlyName = "Inner Stopping Radius"
	float32 m_flInnerRadius;
	// MPropertyFriendlyName = "Maximum Speed Scale"
	float32 m_flMaxScale;
	// MPropertyFriendlyName = "Minimum Speed Scale"
	float32 m_flMinScale;
	// MPropertyFriendlyName = "Damping"
	CAnimInputDamping m_damping;
};
