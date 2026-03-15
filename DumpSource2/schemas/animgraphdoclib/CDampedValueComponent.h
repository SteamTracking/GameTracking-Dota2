// MGetKV3ClassDefaults = {
//	"_class": "CDampedValueComponent",
//	"m_group": "",
//	"m_id":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bStartEnabled": true,
//	"m_nPriority": 100,
//	"m_networkMode": "ServerAuthoritative",
//	"m_name": "",
//	"m_items":
//	[
//	]
//}
class CDampedValueComponent : public CAnimGraphDoc_Component
{
	// MPropertyFriendlyName = "Name"
	CUtlString m_name;
	// MPropertyFriendlyName = "Items"
	// MPropertyAutoExpandSelf
	CUtlVector< CDampedValueItem > m_items;
};
