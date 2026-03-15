// MGetKV3ClassDefaults = {
//	"_class": "CMixPresetDSP",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": true,
//	"m_nChannels": -1,
//	"m_effectName": "core.null",
//	"m_flXFade": 0.100000
//}
// MPropertyFriendlyName = "VMix Preset DSP Audio Node"
// MPropertyDescription = "Applies an effects preset from the source1 DSP system."
class CMixPresetDSP : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 m_nChannels;
	// MPropertyFriendlyName = "Effect Preset Name"
	// MPropertyAttributeChoiceName = "dsp_preset"
	CUtlString m_effectName;
	// MPropertyFriendlyName = "Crossfade time (seconds)"
	float32 m_flXFade;
};
