// MGetKV3ClassDefaults = {
//	"_class": "CMixSteamAudioHybridReverb",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flReverbTimeLow": 0.100000,
//	"m_flReverbTimeMid": 0.100000,
//	"m_flReverbTimeHigh": 0.100000,
//	"m_vecReverbTime":
//	[
//	]
//}
// MPropertyFriendlyName = "VMix Steam Audio Hybrid Reverb Node"
// MPropertyDescription = "Applies Steam Audio Hybrid Reverb."
class CMixSteamAudioHybridReverb : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Reverb Time (RT60), Low Frequency"
	// MPropertyAttributeRange = "0.1 10.0"
	float32 m_flReverbTimeLow;
	// MPropertyFriendlyName = "Reverb Time (RT60), Mid Frequency"
	// MPropertyAttributeRange = "0.1 10.0"
	float32 m_flReverbTimeMid;
	// MPropertyFriendlyName = "Reverb Time (RT60), High Frequency"
	// MPropertyAttributeRange = "0.1 10.0"
	float32 m_flReverbTimeHigh;
	// MPropertyFriendlyName = "Reverb Time"
	// MPropertyAttributeRange = "0.1 10.0"
	CUtlVector< float32 > m_vecReverbTime;
};
