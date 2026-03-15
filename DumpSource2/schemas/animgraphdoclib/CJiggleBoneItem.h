// MGetKV3ClassDefaults = {
//	"m_boneName": "",
//	"m_flSpringStrength": 10.000000,
//	"m_flSimRateFPS": 90.000000,
//	"m_flDamping": 0.010000,
//	"m_eSimSpace": "SimSpace_World",
//	"m_vBoundsMaxLS":
//	[
//		10.000000,
//		10.000000,
//		10.000000
//	],
//	"m_vBoundsMinLS":
//	[
//		-10.000000,
//		-10.000000,
//		-10.000000
//	]
//}
// MPropertyFriendlyName = "Item"
// MPropertyElementNameFn (UNKNOWN FOR PARSER)
class CJiggleBoneItem
{
	// MPropertyFriendlyName = "Bone"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_boneName;
	// MPropertyFriendlyName = "Spring Strength"
	float32 m_flSpringStrength;
	// MPropertyFriendlyName = "Sim Rate (FPS)"
	float32 m_flSimRateFPS;
	// MPropertyFriendlyName = "Damping"
	// MPropertyAttributeRange = "0 1"
	float32 m_flDamping;
	// MPropertyFriendlyName = "Sim Space"
	JiggleBoneSimSpace m_eSimSpace;
	// MPropertyFriendlyName = "Max"
	// MPropertyGroupName = "Movement Limits"
	Vector m_vBoundsMaxLS;
	// MPropertyFriendlyName = "Min"
	// MPropertyGroupName = "Movement Limits"
	Vector m_vBoundsMinLS;
};
