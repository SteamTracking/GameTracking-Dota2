// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_ResetRotation",
//	"m_bEnabled": true,
//	"m_bIgnoreObjectRotation": false,
//	"m_bResetPitch": true,
//	"m_bResetYaw": true,
//	"m_bResetRoll": true
//}
// MPropertyFriendlyName = "Transform: Reset Rotation"
// MPropertyDescription = "Reset the current rotation such the element only inherits the object level rotation, but does not inherit the rotation applied to its parent."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_ResetRotation : public CSmartPropTransformOperation
{
	// MPropertyDescription = "If enabled, the rotation will be reset to a world space instead of object space, meaning any rotation applied to the object in Hammer will be ignored."
	CSmartPropAttributeBool m_bIgnoreObjectRotation;
	// MPropertyDescription = "Should the pitch (rotation around left vector) value be reset."
	CSmartPropAttributeBool m_bResetPitch;
	// MPropertyDescription = "Should the yaw (roation around the up vector) value be reset."
	CSmartPropAttributeBool m_bResetYaw;
	// MPropertyDescription = "Should the roll (rotation around forward vector) value be reset."
	CSmartPropAttributeBool m_bResetRoll;
};
