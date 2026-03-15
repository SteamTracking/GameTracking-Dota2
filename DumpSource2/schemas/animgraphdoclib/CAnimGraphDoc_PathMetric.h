// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_PathMetric",
//	"m_flWeight": 1.000000,
//	"m_flDistance": 100.000000,
//	"m_pathSamples":
//	[
//	],
//	"m_bExtrapolateMovement": true,
//	"m_flMinExtrapolationSpeed": 2.000000
//}
// MPropertyFriendlyName = "Path Metric"
class CAnimGraphDoc_PathMetric : public CAnimGraphDoc_MotionMetric
{
	// MPropertyFriendlyName = "Distance"
	float32 m_flDistance;
	// MPropertyFriendlyName = "Samples Times"
	CUtlVector< float32 > m_pathSamples;
	// MPropertyFriendlyName = "Extrapolate Movement"
	// MPropertyAutoRebuildOnChange
	bool m_bExtrapolateMovement;
	// MPropertyFriendlyName = "Min Extrapolation Speed"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMinExtrapolationSpeed;
};
