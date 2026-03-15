// MGetKV3ClassDefaults = {
//	"_class": "CMixSteamAudioSource",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_nInterpolation": "SA_HRTFINTEROP_BILINEAR",
//	"m_flDirectMixLevel": 1.000000,
//	"m_bEnablePerspectiveCorrection": false,
//	"m_bRelativePosition": false
//}
// MPropertyFriendlyName = "VMix Steam Audio Source Node"
// MPropertyDescription = "Applies steam audio model for a 3d audio source.  This includes panning and HRTF (head-related transfer function)."
class CMixSteamAudioSource : public CMixPropertyBase
{
	// MPropertyFriendlyName = "HRTF Interpolation"
	SteamAudioHRTFInterpolationType_t m_nInterpolation;
	// MPropertyFriendlyName = "Direct Mix Level"
	// MPropertyAttributeRange = "0 1"
	float32 m_flDirectMixLevel;
	// MPropertyFriendlyName = "Enable Perspective Correction"
	// MPropertyDescription = "If checked, enables perspective correction for spatialized sound sources. When perspective correction is enabled, instead of spatializing sounds from their world - space position relative to the listener, sounds are spatialized from their on - screen position relative to the user. This can improve perceived localization accuracy in 3D non - VR applications."
	bool m_bEnablePerspectiveCorrection;
	// MPropertyFriendlyName = "Relative Input Position"
	// MPropertyDescription = "<b>Check</b> this if the input position is relative to the listener.<br /> <b>Don't check</b> this if the input position is aboslute world space coordinates."
	bool m_bRelativePosition;
};
