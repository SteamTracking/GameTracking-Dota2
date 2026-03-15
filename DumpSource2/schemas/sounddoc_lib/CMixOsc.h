// MGetKV3ClassDefaults = {
//	"_class": "CMixOsc",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_desc":
//	{
//		"oscType": "LFO_SHAPE_SINE",
//		"m_freq": 440.000000,
//		"m_flPhase": 0.000000
//	}
//}
// MPropertyFriendlyName = "VMix Oscillator Audio Node"
// MPropertyDescription = "Generates a tone as an audio track."
class CMixOsc : public CMixPropertyBase
{
	// MPropertyAutoExpandSelf
	VMixOscDesc_t m_desc;
};
