// MGetKV3ClassDefaults = {
//	"_class": "CMixFlanger",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flDelay": 8.000000,
//	"m_flFeedback": -40.000000,
//	"m_flFeedfoward": 0.500000,
//	"m_flModRate": 0.500000,
//	"m_flModDepth": 0.500000,
//	"m_bPhaseInvert": false,
//	"m_flGlideTime": 150.000000,
//	"m_bAntialiasing": false,
//	"m_flGain": 0.000000
//}
// MPropertyFriendlyName = "VMix Short timeModulating Delay Audio Node"
// MPropertyDescription = "A short time delay with modulation for flange and chorus effects."
class CMixFlanger : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Delay Time (ms)"
	// MPropertyAttributeRange = "0.5 14"
	float32 m_flDelay;
	// MPropertyFriendlyName = "Feedback Gain (dB)"
	// MPropertyAttributeRange = "-40 -0.6"
	float32 m_flFeedback;
	// MPropertyFriendlyName = "Wet (linear)"
	// MPropertyAttributeRange = "0 1.0"
	float32 m_flFeedfoward;
	// MPropertyFriendlyName = "Modulation Rate (Hz)"
	// MPropertyAttributeRange = "0 4"
	float32 m_flModRate;
	// MPropertyFriendlyName = "Modulation Depth (linear)"
	// MPropertyAttributeRange = "0 1.0"
	float32 m_flModDepth;
	// MPropertyFriendlyName = "Invert Phase"
	bool m_bPhaseInvert;
	// MPropertyFriendlyName = "Modulation Param Glide (ms)"
	// MPropertyAttributeRange = "0 2000"
	float32 m_flGlideTime;
	// MPropertyFriendlyName = "Apply Antialiasing"
	bool m_bAntialiasing;
	// MPropertyFriendlyName = "Output Gain (dB)"
	// MPropertyAttributeRange = "-24 24"
	float32 m_flGain;
};
