// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_RagdollNode",
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
//	"m_weightListName": "",
//	"m_poseControlMethod": "Absolute",
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
//	}
//}
// MPropertyFriendlyName = "Ragdoll"
class CAnimGraphDoc_RagdollNode : public CAnimGraphDoc_Node
{
	CUtlString m_weightListName;
	RagdollPoseControl m_poseControlMethod;
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
};
