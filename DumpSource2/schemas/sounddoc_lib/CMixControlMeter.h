// MGetKV3ClassDefaults = {
//	"_class": "CMixControlMeter",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flValue": 0.000000
//}
// MPropertyFriendlyName = "VMix Control Meter Node"
// MPropertyDescription = "Allows you to monitor a control value in real-time in vmixtool."
class CMixControlMeter : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Value"
	float32 m_flValue;
};
