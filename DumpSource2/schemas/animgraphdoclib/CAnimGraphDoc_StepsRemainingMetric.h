// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_StepsRemainingMetric",
//	"m_flWeight": 0.000000,
//	"m_feet":
//	[
//	],
//	"m_flMinStepsRemaining": 1.000000
//}
// MPropertyFriendlyName = "Steps Remaining Metric"
class CAnimGraphDoc_StepsRemainingMetric : public CAnimGraphDoc_MotionMetric
{
	// MPropertyFriendlyName = "Feet"
	// MPropertyAttributeChoiceName = "Foot"
	// MPropertyAutoExpandSelf
	CUtlVector< CUtlString > m_feet;
	// MPropertyFriendlyName = "Min Steps Remaining"
	float32 m_flMinStepsRemaining;
};
