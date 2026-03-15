// MGetKV3ClassDefaults = {
//	"_class": "CMixControlOutput",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flDefaultValue": 1.000000
//}
// MPropertyFriendlyName = "VMix Control Output Node"
// MPropertyDescription = "Save the results of a control value (e.g. envelope level) so that code/stack can query it by name."
class CMixControlOutput : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Default Value"
	float32 m_flDefaultValue;
};
