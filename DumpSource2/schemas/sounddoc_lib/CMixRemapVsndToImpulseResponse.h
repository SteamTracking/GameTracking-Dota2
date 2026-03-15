// MGetKV3ClassDefaults = {
//	"_class": "CMixRemapVsndToImpulseResponse",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flPreDelayMS": 0.000000
//}
// MPropertyFriendlyName = "VMix Remap VSnd to Impulse Response Node"
// MPropertyDescription = "Remaps a vsnd to an impulse response."
class CMixRemapVsndToImpulseResponse : public CMixPropertyBase
{
	// MPropertyFriendlyName = "PreDelayMS"
	float32 m_flPreDelayMS;
};
