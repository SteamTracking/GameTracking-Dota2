// MGetKV3ClassDefaults = {
//	"_class": "CMixDelayImpulseResponse",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flPreDelayMS": 0.000000
//}
// MPropertyFriendlyName = "VMix Apply Pre-Delay to Impulse Response Node"
// MPropertyDescription = "Applies a pre-delay to an impulse response."
class CMixDelayImpulseResponse : public CMixPropertyBase
{
	// MPropertyFriendlyName = "PreDelayMS"
	float32 m_flPreDelayMS;
};
