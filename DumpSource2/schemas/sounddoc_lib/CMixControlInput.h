// MGetKV3ClassDefaults = {
//	"_class": "CMixControlInput",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flDefaultValue": 1.000000,
//	"m_flMinRange": 0.000000,
//	"m_flMaxRange": 1.000000,
//	"m_bUseDecibels": false
//}
// MPropertyFriendlyName = "VMix Control Input Node"
// MPropertyDescription = "Define a control variable that can be set by code or an operator stack."
class CMixControlInput : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Default Value"
	float32 m_flDefaultValue;
	// MPropertyFriendlyName = "Preview Min Range"
	float32 m_flMinRange;
	// MPropertyFriendlyName = "Preview Max Range"
	float32 m_flMaxRange;
	// MPropertyFriendlyName = "Convert From dB"
	bool m_bUseDecibels;
};
