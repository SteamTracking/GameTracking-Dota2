// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_FootPositionMetric",
//	"m_flWeight": 1.000000,
//	"m_feet":
//	[
//	],
//	"m_bIgnoreSlope": true
//}
// MPropertyFriendlyName = "Foot Position Metric"
class CAnimGraphDoc_FootPositionMetric : public CAnimGraphDoc_MotionMetric
{
	// MPropertyFriendlyName = "Foot"
	// MPropertyAttributeChoiceName = "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet;
	// MPropertyFriendlyName = "Ignore Slope"
	bool m_bIgnoreSlope;
};
