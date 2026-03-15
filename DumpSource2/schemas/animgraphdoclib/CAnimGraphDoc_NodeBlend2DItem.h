// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_NodeBlend2DItem",
//	"m_blendValue":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_bUseCustomDuration": false,
//	"m_flCustomDuration": 0.000000,
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
//	"m_name": "<Unnamed Item>"
//}
// MPropertyFriendlyName = "Node Blend Item"
class CAnimGraphDoc_NodeBlend2DItem : public CAnimGraphDoc_Blend2DItem
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Name"
	CUtlString m_name;
};
