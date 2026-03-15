// MGetKV3ClassDefaults = {
//	"_class": "CMixFilter",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_filterType": "FILTER_LOWPASS",
//	"m_nChannels": -1,
//	"m_flFrequency": 2000.000000,
//	"m_flQ": 0.707000,
//	"m_fldbGain": 0.000000,
//	"m_nFilterSlope": "FILTER_SLOPE_12dB"
//}
// MPropertyFriendlyName = "VMix Filter Audio Node"
// MPropertyDescription = "Resonant filter with adjustable slope. NOTE: This is a clean filter, not an analog model with distortion."
class CMixFilter : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Filter Type"
	// MPropertyAttributeChoiceName = "filter_type"
	CUtlString m_filterType;
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 m_nChannels;
	// MPropertyFriendlyName = "Center Frequency (Hz)"
	// MPropertyAttributeRange = "biased 20 22000"
	float32 m_flFrequency;
	// MPropertyFriendlyName = "Q"
	// MPropertyAttributeRange = "0.1 12"
	float32 m_flQ;
	// MPropertyFriendlyName = "Gain (dB)"
	// MPropertyAttributeRange = "-24 24"
	float32 m_fldbGain;
	// MPropertyFriendlyName = "Filter slope"
	VMixFilterSlope_t m_nFilterSlope;
};
