// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_MotionMatchingNode",
//	"m_sName": "Unnamed",
//	"m_vecPosition":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_nNodeID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bDebugThisNode": false,
//	"m_networkMode": "ServerAuthoritative",
//	"m_groups":
//	[
//	],
//	"m_metrics":
//	[
//	],
//	"m_blendCurve":
//	{
//		"m_flControlPoint1": 0.000000,
//		"m_flControlPoint2": 1.000000
//	},
//	"m_nRandomSeed": <HIDDEN FOR DIFF>,
//	"m_flSampleRate": 0.100000,
//	"m_bSearchEveryTick": true,
//	"m_flSearchInterval": 0.100000,
//	"m_bSearchWhenMotionEnds": true,
//	"m_bSearchWhenGoalChanges": true,
//	"m_flBlendTime": 0.300000,
//	"m_flSelectionThreshold": 0.000000,
//	"m_flReselectionTimeWindow": 0.300000,
//	"m_bLockSelectionWhenWaning": false,
//	"m_bEnableRotationCorrection": true,
//	"m_bGoalAssist": true,
//	"m_flGoalAssistDistance": 40.000000,
//	"m_flGoalAssistTolerance": 2.000000,
//	"m_bEnableDistanceScaling": true,
//	"m_flDistanceScale_OuterRadius": 120.000000,
//	"m_flDistanceScale_InnerRadius": 40.000000,
//	"m_flDistanceScale_MaxScale": 1.500000,
//	"m_flDistanceScale_MinScale": 0.500000,
//	"m_distanceScale_Damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	}
//}
// MPropertyFriendlyName = "Motion Matching"
class CAnimGraphDoc_MotionMatchingNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionItemGroup > > m_groups;
	// MPropertySuppressField
	CUtlVector< CSmartPtr< CAnimGraphDoc_MotionMetric > > m_metrics;
	// MPropertySuppressField
	CBlendCurve m_blendCurve;
	// MPropertySuppressField
	int32 m_nRandomSeed;
	// MPropertyFriendlyName = "Sample Rate"
	// MPropertyAttributeRange = "0.01 0.2"
	float32 m_flSampleRate;
	// MPropertyFriendlyName = "Search Every Update"
	// MPropertyGroupName = "Search Frequency"
	// MPropertyAutoRebuildOnChange
	bool m_bSearchEveryTick;
	// MPropertyFriendlyName = "Search Interval"
	// MPropertyGroupName = "Search Frequency"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flSearchInterval;
	// MPropertyFriendlyName = "Search when motion ends"
	// MPropertyGroupName = "Search Frequency"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bSearchWhenMotionEnds;
	// MPropertyFriendlyName = "Search when goal changes"
	// MPropertyGroupName = "Search Frequency"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	bool m_bSearchWhenGoalChanges;
	// MPropertyFriendlyName = "Blend Time"
	float32 m_flBlendTime;
	// MPropertyFriendlyName = "Selection Threshold"
	float32 m_flSelectionThreshold;
	// MPropertyFriendlyName = "Re-Selection Time Window"
	float32 m_flReselectionTimeWindow;
	// MPropertyFriendlyName = "Lock Selection When Waning"
	bool m_bLockSelectionWhenWaning;
	// MPropertyFriendlyName = "Enable Rotation Correction"
	bool m_bEnableRotationCorrection;
	// MPropertyFriendlyName = "Enable Goal Assist"
	// MPropertyGroupName = "Goal Assist"
	// MPropertyAutoRebuildOnChange
	bool m_bGoalAssist;
	// MPropertyFriendlyName = "Goal Assist Distance"
	// MPropertyGroupName = "Goal Assist"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flGoalAssistDistance;
	// MPropertyFriendlyName = "Goal Assist Tolerance"
	// MPropertyGroupName = "Goal Assist"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flGoalAssistTolerance;
	// MPropertyFriendlyName = "Enable Distance Scaling"
	// MPropertyGroupName = "Distance Scaling"
	// MPropertyAutoRebuildOnChange
	bool m_bEnableDistanceScaling;
	// MPropertyFriendlyName = "Outer Stopping Radius"
	// MPropertyGroupName = "Distance Scaling"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flDistanceScale_OuterRadius;
	// MPropertyFriendlyName = "Inner Stopping Radius"
	// MPropertyGroupName = "Distance Scaling"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flDistanceScale_InnerRadius;
	// MPropertyFriendlyName = "Maximum Speed Scale"
	// MPropertyGroupName = "Distance Scaling"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flDistanceScale_MaxScale;
	// MPropertyFriendlyName = "Minimum Speed Scale"
	// MPropertyGroupName = "Distance Scaling"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flDistanceScale_MinScale;
	// MPropertyFriendlyName = "Damping"
	// MPropertyGroupName = "Distance Scaling"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CAnimInputDamping m_distanceScale_Damping;
};
