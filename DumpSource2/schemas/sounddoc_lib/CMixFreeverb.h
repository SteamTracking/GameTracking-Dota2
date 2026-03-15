// MGetKV3ClassDefaults = {
//	"_class": "CMixFreeverb",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flRoomSize": 0.500000,
//	"m_flDamp": 0.500000,
//	"m_flWidth": 0.500000,
//	"m_flLateReflections": 1.000000
//}
// MPropertyFriendlyName = "VMix Freeverb Audio Node"
// MPropertyDescription = "Used to create reverb effects based on a symmetrical room."
class CMixFreeverb : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Size"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flRoomSize;
	// MPropertyFriendlyName = "Dampening Factor"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flDamp;
	// MPropertyFriendlyName = "Width"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flWidth;
	// MPropertyFriendlyName = "Late Reflections"
	// MPropertyAttributeRange = "0.0 1.0"
	float32 m_flLateReflections;
};
