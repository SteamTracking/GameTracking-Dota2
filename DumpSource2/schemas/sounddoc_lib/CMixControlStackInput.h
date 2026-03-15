// MGetKV3ClassDefaults = {
//	"_class": "CMixControlStackInput",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flDefaultValue": 1.000000,
//	"m_flMinRange": 0.000000,
//	"m_flMaxRange": 1.000000
//}
// MPropertyFriendlyName = "VMix Control Stack Input Node"
// MPropertyDescription = "This will copy a control value from this soundevent's operator stack.  Works with any stack/variable without modifying the stack itself."
class CMixControlStackInput : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Default Value"
	float32 m_flDefaultValue;
	// MPropertyFriendlyName = "Preview Min Range"
	float32 m_flMinRange;
	// MPropertyFriendlyName = "Preview Max Range"
	float32 m_flMaxRange;
};
