// MGetKV3ClassDefaults = {
//	"_class": "CMixDiffusor",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flSize": 0.500000,
//	"m_flComplexity": 2.000000,
//	"m_flFeedback": -8.000000,
//	"m_flOutputGain": 0.000000
//}
// MPropertyFriendlyName = "VMix Diffusor Audio Node"
// MPropertyDescription = "Creates a dense field of delay/feedback/reflections.  This is basically a sequence of allpass filters and short delay lines.  Can be used to create part of a reverb effect."
class CMixDiffusor : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Size"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flSize;
	// MPropertyFriendlyName = "Complexity"
	// MPropertyAttributeRange = "1.01 8.0"
	float32 m_flComplexity;
	// MPropertyFriendlyName = "Feedback (dB)"
	// MPropertyAttributeRange = "-24.0 -8.0"
	float32 m_flFeedback;
	// MPropertyFriendlyName = "Output (dB)"
	// MPropertyAttributeRange = "-24.0 -0.1"
	float32 m_flOutputGain;
};
