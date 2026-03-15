// MGetKV3ClassDefaults = {
//	"_class": "CMixAudioMeter",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": true,
//	"m_flLeftLevel": 0.000000,
//	"m_flLeftPeak": 0.000000,
//	"m_flRightLevel": 0.000000,
//	"m_flRightPeak": 0.000000
//}
// MPropertyFriendlyName = "VMix Audio Meter Node"
// MPropertyDescription = "This lets you meter an audio signal in vmixtool."
class CMixAudioMeter : public CMixPropertyBase
{
	float32 m_flLeftLevel;
	float32 m_flLeftPeak;
	float32 m_flRightLevel;
	float32 m_flRightPeak;
};
