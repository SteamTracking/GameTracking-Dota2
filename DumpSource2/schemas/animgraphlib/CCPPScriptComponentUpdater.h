// MGetKV3ClassDefaults = {
//	"_class": "CCPPScriptComponentUpdater",
//	"m_name": "",
//	"m_id":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_networkMode": "ServerAuthoritative",
//	"m_bStartEnabled": false,
//	"m_scriptsToRun":
//	[
//	]
//}
class CCPPScriptComponentUpdater : public CAnimComponentUpdater
{
	// MPropertyFriendlyName = "Scripts"
	CUtlVector< CGlobalSymbol > m_scriptsToRun;
};
