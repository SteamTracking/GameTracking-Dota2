// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_RandomOffset",
//	"m_bEnabled": true,
//	"m_vRandomPositionMin":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vRandomPositionMax":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vSnapIncrement":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	]
//}
// MPropertyFriendlyName = "Transform: Random Offset"
// MPropertyDescription = "Apply a random position offset to the current transform."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_RandomOffset : public CSmartPropTransformOperation
{
	// MPropertyDescription = "Minimum random position offset"
	CSmartPropAttributeVector m_vRandomPositionMin;
	// MPropertyDescription = "Maximum random position offset"
	CSmartPropAttributeVector m_vRandomPositionMax;
	// MPropertyDescription = "If non-zero, specifies the increment to which the randomly selected offset value will be snapped. Note that the snap value is absolute, not relative to the min or max, but if the if the min or max are not multiples of the snap value they can still be selected."
	CSmartPropAttributeVector m_vSnapIncrement;
};
