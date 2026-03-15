// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_TimeRemainingMetric",
//	"m_flWeight": 1.000000,
//	"m_bMatchByTimeRemaining": false,
//	"m_flMaxTimeRemaining": 1.000000,
//	"m_bFilterByTimeRemaining": true,
//	"m_flMinTimeRemaining": 0.300000
//}
// MPropertyFriendlyName = "Time Remaining Metric"
class CAnimGraphDoc_TimeRemainingMetric : public CAnimGraphDoc_MotionMetric
{
	// MPropertyFriendlyName = "Match Time Remaining"
	// MPropertyGroupName = ""
	// MPropertyAutoRebuildOnChange
	bool m_bMatchByTimeRemaining;
	// MPropertyFriendlyName = "Max Time Remaining"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMaxTimeRemaining;
	// MPropertyFriendlyName = "Filter By Time Remaining"
	// MPropertyAutoRebuildOnChange
	bool m_bFilterByTimeRemaining;
	// MPropertyFriendlyName = "Min Time Remaining"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMinTimeRemaining;
};
