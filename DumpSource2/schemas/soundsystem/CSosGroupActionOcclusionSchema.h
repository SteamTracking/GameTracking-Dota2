// MGetKV3ClassDefaults = {
//	"_class": "CSosGroupActionOcclusionSchema",
//	"m_flCalculationInterval": 0.100000,
//	"m_flRadius": 0.000000,
//	"m_flOcclusionScale": 1.000000,
//	"m_flOcclusionMin": 0.000000,
//	"m_flOcclusionMax": 1.000000,
//	"m_flTestDepth": 0.000000
//}
// MPropertyFriendlyName = "Occlusion Info"
class CSosGroupActionOcclusionSchema : public CSosGroupActionSchema
{
	// MPropertyFriendlyName = "Calculation interval ( seconds )."
	float32 m_flCalculationInterval;
	// MPropertyFriendlyName = "Occlusion radius."
	float32 m_flRadius;
	// MPropertyFriendlyName = "Occlusion scale."
	float32 m_flOcclusionScale;
	// MPropertyFriendlyName = "Occlusion min."
	float32 m_flOcclusionMin;
	// MPropertyFriendlyName = "Occlusion max."
	float32 m_flOcclusionMax;
	// MPropertyFriendlyName = "Test depth."
	float32 m_flTestDepth;
};
