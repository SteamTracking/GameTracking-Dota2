// MGetKV3ClassDefaults = {
//	"_class": "CMixControlRemap",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flInputMin": 0.000000,
//	"m_flInputMax": 1.000000,
//	"m_flOutputStart": 0.000000,
//	"m_flOutputEnd": 1.000000,
//	"m_flPower": 1.000000
//}
// MPropertyFriendlyName = "VMix Control Remap Node"
// MPropertyDescription = "Remap a control value using a clamped linear range or clamped power curve.  Allows you to stretch and clip a control signal."
class CMixControlRemap : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Input Min"
	float32 m_flInputMin;
	// MPropertyFriendlyName = "Input Max"
	float32 m_flInputMax;
	// MPropertyFriendlyName = "Output Start"
	float32 m_flOutputStart;
	// MPropertyFriendlyName = "Output End"
	float32 m_flOutputEnd;
	// MPropertyFriendlyName = "Nonlinear power (1.0 = linear)"
	// MPropertyAttributeRange = "biased 0.02 20"
	float32 m_flPower;
};
