// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_SetParameterAction",
//	"m_paramName": "",
//	"m_param":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_value":
//	{
//		"m_nType": 0
//	}
//}
class CAnimGraphDoc_SetParameterAction : public CAnimGraphDoc_Action
{
	// MPropertyHideField
	CUtlString m_paramName;
	// MPropertyFriendlyName = "Parameter"
	// MPropertyAttributeChoiceName = "Parameter"
	AnimParamID m_param;
	// MPropertyFriendlyName = "Value"
	CAnimVariant m_value;
};
