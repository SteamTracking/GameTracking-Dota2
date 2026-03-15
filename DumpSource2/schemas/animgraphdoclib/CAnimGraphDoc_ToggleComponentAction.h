// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_ToggleComponentAction",
//	"m_componentID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bSetEnabled": true
//}
class CAnimGraphDoc_ToggleComponentAction : public CAnimGraphDoc_Action
{
	// MPropertyFriendlyName = "Component"
	// MPropertyAttributeChoiceName = "Component"
	AnimComponentID m_componentID;
	// MPropertyFriendlyName = "Set Enabled"
	bool m_bSetEnabled;
};
