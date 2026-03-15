// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_SubGraphNode",
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
//	"m_inputNodeID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_outputNodeID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_inputConnectionMap":
//	[
//	],
//	"m_subGraphFilename": "",
//	"m_animNameMap":
//	{
//	}
//}
// MPropertyFriendlyName = "SubGraph"
class CAnimGraphDoc_SubGraphNode : public CAnimGraphDoc_ContainerNodeBase
{
	// MPropertyFriendlyName = "SubGraph File"
	// MPropertyAttributeEditor = "AssetBrowse( vsubgrph, *requiredoubleclick  )"
	CUtlString m_subGraphFilename;
	// MPropertySuppressField
	CUtlHashtable< CUtlString, CUtlString > m_animNameMap;
};
