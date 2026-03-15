// MGetKV3ClassDefaults = {
//	"_class": "CAnimScriptComponent",
//	"m_group": "",
//	"m_id":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bStartEnabled": true,
//	"m_nPriority": 100,
//	"m_networkMode": "ServerAuthoritative",
//	"m_sName": "Unnamed",
//	"m_scriptFilename": ""
//}
class CAnimScriptComponent : public CAnimGraphDoc_Component
{
	// MPropertyFriendlyName = "Name"
	// MPropertySortPriority = 100
	CUtlString m_sName;
	// MPropertyFriendlyName = "Script File"
	// MPropertyAttributeEditor = "AssetBrowse( as )"
	CUtlString m_scriptFilename;
};
