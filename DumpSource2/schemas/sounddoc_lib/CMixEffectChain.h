// MGetKV3ClassDefaults = {
//	"_class": "CMixEffectChain",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": true,
//	"m_nChannels": -1,
//	"m_effectName": "core.null",
//	"m_flXFade": 0.100000
//}
// MPropertyFriendlyName = "VMix Effect Chain Audio Node"
// MPropertyDescription = "Allows you to swap between sub-graphs with a short crossfade.  Can be used to swap out processing algorithms/configurations, or to dynamically enable/disable optional processing stages."
class CMixEffectChain : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Channels"
	// MPropertyAttributeChoiceName = "processor_channels"
	int32 m_nChannels;
	// MPropertyFriendlyName = "Effect Preset Name"
	CUtlString m_effectName;
	// MPropertyFriendlyName = "Crossfade time (seconds)"
	float32 m_flXFade;
};
