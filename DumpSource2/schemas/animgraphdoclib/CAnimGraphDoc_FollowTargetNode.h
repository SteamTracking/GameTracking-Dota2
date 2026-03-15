// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_FollowTargetNode",
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
//	"m_boneName": "",
//	"m_TargetSettings":
//	{
//		"m_TargetSource": "Bone",
//		"m_Bone":
//		{
//			"m_Name": ""
//		},
//		"m_AnimgraphParameterNamePosition":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_AnimgraphParameterNameOrientation":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_TargetCoordSystem": "World Space"
//	},
//	"m_bMatchTargetOrientation": false
//}
// MPropertyFriendlyName = "Follow Target"
class CAnimGraphDoc_FollowTargetNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Bone"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_boneName;
	// MPropertyFriendlyName = "Target Settings"
	// MPropertyAutoExpandSelf
	IKTargetSettings_t m_TargetSettings;
	// MPropertyFriendlyName = "Match Target Orientation"
	// MPropertyAutoRebuildOnChange
	bool m_bMatchTargetOrientation;
};
