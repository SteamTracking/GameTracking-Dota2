// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_DistanceRemainingMetric",
//	"m_flWeight": 1.000000,
//	"m_flMaxDistance": 300.000000,
//	"m_bFilterFixedMinDistance": true,
//	"m_flMinDistance": 0.000000,
//	"m_bFilterGoalDistance": true,
//	"m_flStartGoalFilterDistance": 150.000000,
//	"m_bFilterGoalOvershoot": false,
//	"m_flMaxGoalOvershootScale": 2.000000
//}
// MPropertyFriendlyName = "Distance Remaining Metric"
class CAnimGraphDoc_DistanceRemainingMetric : public CAnimGraphDoc_MotionMetric
{
	// MPropertyFriendlyName = "Maximum Tracked Distance"
	float32 m_flMaxDistance;
	// MPropertyFriendlyName = "Filter By Fixed Distance"
	// MPropertyAutoRebuildOnChange
	bool m_bFilterFixedMinDistance;
	// MPropertyFriendlyName = "Min Distance"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMinDistance;
	// MPropertyFriendlyName = "Filter By Goal Distance"
	// MPropertyAutoRebuildOnChange
	bool m_bFilterGoalDistance;
	// MPropertyFriendlyName = "Goal Filter Start Distance"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flStartGoalFilterDistance;
	// MPropertyFriendlyName = "Filter By Goal Overshoot"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bFilterGoalOvershoot;
	// MPropertyFriendlyName = "Max Goal Overshoot Scale"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMaxGoalOvershootScale;
};
