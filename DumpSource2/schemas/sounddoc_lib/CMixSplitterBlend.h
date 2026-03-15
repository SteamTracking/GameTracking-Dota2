// MGetKV3ClassDefaults = {
//	"_class": "CMixSplitterBlend",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flLockAmount": 0.000000
//}
// MPropertyFriendlyName = "VMix Splitter Blend Audio Node"
// MPropertyDescription = "Blends a single track to multiple outputs based on a single control input.  This works similarly to the blend node, but in reverse.  It will always be blending to a contiguous set of outputs.  The control value will move the signal along the list of outputs."
class CMixSplitterBlend : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Lock to output (0-1)"
	float32 m_flLockAmount;
};
