// MGetKV3ClassDefaults = {
//	"_class": "CMixEnvelopeTrigger",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flBaseValue": 0.000000,
//	"m_flDestinationValue": 1.000000,
//	"m_flAttackTime": 0.400000,
//	"m_flHoldTime": 0.200000,
//	"m_flReleaseTime": 0.400000
//}
// MPropertyFriendlyName = "VMix Envelope Trigger Control Node"
// MPropertyDescription = "Used to create reverb effects based on a model of a reverb plate."
class CMixEnvelopeTrigger : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Base Value"
	float32 m_flBaseValue;
	// MPropertyFriendlyName = "Destination Value"
	float32 m_flDestinationValue;
	// MPropertyFriendlyName = "Attack Time (seconds)"
	float32 m_flAttackTime;
	// MPropertyFriendlyName = "Hold Time (seconds)"
	float32 m_flHoldTime;
	// MPropertyFriendlyName = "Release Time (seconds)"
	float32 m_flReleaseTime;
};
