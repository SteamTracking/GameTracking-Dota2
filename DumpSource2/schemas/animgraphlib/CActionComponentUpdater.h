// MGetKV3ClassDefaults = {
//	"_class": "CActionComponentUpdater",
//	"m_name": "",
//	"m_id":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_networkMode": "ServerAuthoritative",
//	"m_bStartEnabled": false,
//	"m_actions":
//	[
//	]
//}
class CActionComponentUpdater : public CAnimComponentUpdater
{
	CUtlVector< CSmartPtr< CAnimActionUpdater > > m_actions;
};
