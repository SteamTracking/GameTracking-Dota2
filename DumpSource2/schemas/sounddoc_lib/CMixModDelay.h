// MGetKV3ClassDefaults = {
//	"_class": "CMixModDelay",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_bPhaseInvert": false,
//	"m_flGlideTime": 150.000000,
//	"m_flDelay": 500.000000,
//	"m_flFeedback": -40.000000,
//	"m_flGain": 0.000000,
//	"m_flModRate": 0.000000,
//	"m_flModDepth": 0.000000,
//	"m_filterType": "FILTER_PASSTHROUGH",
//	"m_flFrequency": 400.000000,
//	"m_flQ": 0.700000,
//	"m_flFilterGain": 0.000000,
//	"m_bAntialiasing": true
//}
// MPropertyFriendlyName = "VMix Modulating Delay Audio Node"
// MPropertyDescription = "A delay with a modulated delay time."
class CMixModDelay : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Invert Phase"
	bool m_bPhaseInvert;
	// MPropertyFriendlyName = "Glide Time (ms)"
	// MPropertyAttributeRange = "0 2000"
	float32 m_flGlideTime;
	// MPropertyFriendlyName = "Delay Time (ms)"
	// MPropertyGroupName = "Delay"
	// MPropertyAttributeRange = "10 2000"
	float32 m_flDelay;
	// MPropertyFriendlyName = "Feedback Gain (dB)"
	// MPropertyAttributeRange = "-24 -0.6"
	float32 m_flFeedback;
	// MPropertyFriendlyName = "Output Gain (dB)"
	// MPropertyAttributeRange = "-24 24"
	float32 m_flGain;
	// MPropertyFriendlyName = "Modulation Rate (Hz)"
	// MPropertyAttributeRange = "0 20"
	float32 m_flModRate;
	// MPropertyFriendlyName = "Modulation Depth (linear)"
	// MPropertyAttributeRange = "0 1.0"
	float32 m_flModDepth;
	// MPropertyFriendlyName = "Filter Type"
	// MPropertyGroupName = "Filter"
	VMixFilterType_t m_filterType;
	// MPropertyFriendlyName = "Center Frequency (Hz)"
	// MPropertyGroupName = "Filter"
	// MPropertyAttributeRange = "biased 20 22000"
	float32 m_flFrequency;
	// MPropertyFriendlyName = "Q"
	// MPropertyGroupName = "Filter"
	// MPropertyAttributeRange = "0.1 12"
	float32 m_flQ;
	// MPropertyFriendlyName = "Filter Gain (dB)"
	// MPropertyGroupName = "Filter"
	// MPropertyAttributeRange = "-24 24"
	float32 m_flFilterGain;
	// MPropertyFriendlyName = "Apply Antialiasing"
	bool m_bAntialiasing;
};
