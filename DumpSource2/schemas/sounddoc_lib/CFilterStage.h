// MGetKV3ClassDefaults = {
//	"m_filterType": "FILTER_LOWPASS",
//	"m_flFrequency": 11025.000000,
//	"m_flQ": 0.707000,
//	"m_fldbGain": 1.000000,
//	"m_nFilterSlope": "FILTER_SLOPE_12dB",
//	"m_bEnable": true
//}
class CFilterStage
{
	// MPropertyFriendlyName = "Filter Type"
	// MPropertyAttributeChoiceName = "filter_type"
	CUtlString m_filterType;
	// MPropertyFriendlyName = "Center Frequency (Hz)"
	// MPropertyAttributeRange = "biased 20 22000"
	float32 m_flFrequency;
	// MPropertyFriendlyName = "Q"
	// MPropertyAttributeRange = "0.1 12"
	float32 m_flQ;
	// MPropertyFriendlyName = "Gain (dB)"
	// MPropertyAttributeRange = "-24 24"
	float32 m_fldbGain;
	// MPropertyFriendlyName = "Slope"
	VMixFilterSlope_t m_nFilterSlope;
	// MPropertyFriendlyName = "Enabled"
	bool m_bEnable;
};
