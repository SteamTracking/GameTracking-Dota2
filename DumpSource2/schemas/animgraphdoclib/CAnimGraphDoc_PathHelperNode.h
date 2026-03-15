// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_PathHelperNode",
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
//	"m_flStoppingRadius": 36.000000,
//	"m_flStoppingSpeedScale": 1.000000
//}
// MPropertyFriendlyName = "Path Helper"
class CAnimGraphDoc_PathHelperNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Stopping Radius"
	float32 m_flStoppingRadius;
	// MPropertyFriendlyName = "Stopping Min Speed Scale"
	float32 m_flStoppingSpeedScale;
};
