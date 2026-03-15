// MGetKV3ClassDefaults = {
//	"_class": "CMixDelay",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": true,
//	"m_nChannels": -1,
//	"m_flDelay": 500.000000,
//	"m_fldbDirectGain": 0.000000,
//	"m_fldbDelayGain": -3.000000,
//	"m_fldbFeedbackGain": -3.000000,
//	"m_flWidth": 0.000000,
//	"m_bEnableFilter": false,
//	"m_filterType": "FILTER_LOWPASS",
//	"m_flFrequency": 2000.000000,
//	"m_flQ": 0.707000,
//	"m_fldbGain": 0.000000
//}
// MPropertyFriendlyName = "VMix Delay Audio Node"
// MPropertyDescription = "Stereo delay with resonant filter on feedback."
class CMixDelay : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 m_nChannels;
	// MPropertyFriendlyName = "Delay (ms)"
	// MPropertyGroupName = "+Delay"
	// MPropertyAttributeRange = "0 2000"
	float32 m_flDelay;
	// MPropertyFriendlyName = "DirectGain (dB)"
	// MPropertyGroupName = "Delay"
	// MPropertyAttributeRange = "-24 24"
	float32 m_fldbDirectGain;
	// MPropertyFriendlyName = "DelayGain (dB)"
	// MPropertyGroupName = "Delay"
	// MPropertyAttributeRange = "-24 24"
	float32 m_fldbDelayGain;
	// MPropertyFriendlyName = "FeedbackGain (dB)"
	// MPropertyGroupName = "Delay"
	// MPropertyAttributeRange = "-60 12"
	float32 m_fldbFeedbackGain;
	// MPropertyFriendlyName = "Width"
	// MPropertyAttributeRange = "0 1.0"
	float32 m_flWidth;
	// MPropertyFriendlyName = "EnableFilter"
	// MPropertyGroupName = "+Filter"
	bool m_bEnableFilter;
	// MPropertyFriendlyName = "Filter Type"
	// MPropertyGroupName = "Filter"
	// MPropertyAttributeChoiceName = "filter_type"
	CUtlString m_filterType;
	// MPropertyFriendlyName = "Center Frequency (Hz)"
	// MPropertyGroupName = "Filter"
	// MPropertyAttributeRange = "biased 20 22000"
	float32 m_flFrequency;
	// MPropertyFriendlyName = "Q"
	// MPropertyGroupName = "Filter"
	// MPropertyAttributeRange = "0.1 12"
	float32 m_flQ;
	// MPropertyFriendlyName = "Filter Gain (dB)"
	// MPropertyAttributeRange = "-24 24"
	float32 m_fldbGain;
};
