// MGetKV3ClassDefaults = {
//	"_class": "CMixEnvelope",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flAttackTime": 300.000000,
//	"m_flHoldTime": 500.000000,
//	"m_flReleaseTime": 300.000000
//}
// MPropertyFriendlyName = "VMix Envelope Audio Node"
// MPropertyDescription = "Generate a control signal that represents the envelope/level of an audio track.  Think of this as behaving like a meter but driving some graph logic."
class CMixEnvelope : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Attack time (ms)"
	float32 m_flAttackTime;
	// MPropertyFriendlyName = "Hold time (ms)"
	float32 m_flHoldTime;
	// MPropertyFriendlyName = "Release time (ms)"
	float32 m_flReleaseTime;
};
