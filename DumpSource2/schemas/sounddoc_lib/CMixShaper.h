// MGetKV3ClassDefaults = {
//	"_class": "CMixShaper",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_desc":
//	{
//		"m_nShape": 0,
//		"m_fldbDrive": 0.000000,
//		"m_fldbOutputGain": 0.000000,
//		"m_flWetMix": 1.000000,
//		"m_nOversampleFactor": 1
//	}
//}
// MPropertyFriendlyName = "VMix Shaper Audio Node"
// MPropertyDescription = "Apply waveshaping distortion to an audio track."
class CMixShaper : public CMixPropertyBase
{
	// MPropertyAutoExpandSelf
	VMixShaperDesc_t m_desc;
};
