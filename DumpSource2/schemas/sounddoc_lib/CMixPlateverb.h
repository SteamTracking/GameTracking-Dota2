// MGetKV3ClassDefaults = {
//	"_class": "CMixPlateverb",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flPrefilter": 0.500000,
//	"m_flInputDiffusion1": 0.500000,
//	"m_flInputDiffusion2": 0.500000,
//	"m_flDecay": 0.500000,
//	"m_flDamp": 0.500000,
//	"m_flFeedbackDiffusion1": 0.500000,
//	"m_flFeedbackDiffusion2": 0.500000
//}
// MPropertyFriendlyName = "VMix Plateverb Audio Node"
// MPropertyDescription = "Used to create reverb effects based on a model of a reverb plate."
class CMixPlateverb : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Prefilter"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flPrefilter;
	// MPropertyFriendlyName = "Input Diffusion 1"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flInputDiffusion1;
	// MPropertyFriendlyName = "Input Diffusion 2"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flInputDiffusion2;
	// MPropertyFriendlyName = "Decay"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flDecay;
	// MPropertyFriendlyName = "Dampening Factor"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flDamp;
	// MPropertyFriendlyName = "Feedback Diffusion 1"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flFeedbackDiffusion1;
	// MPropertyFriendlyName = "Feedback Diffusion 1"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flFeedbackDiffusion2;
};
