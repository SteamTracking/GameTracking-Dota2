// MGetKV3ClassDefaults = {
//	"m_Description": "",
//	"m_flLinearThresholdSlow": 60.000000,
//	"m_flLinearThresholdStopped": 25.000000,
//	"m_flAngularThresholdSlow": 90.000000,
//	"m_flAngularThresholdStopped": 15.000000,
//	"m_Feet":
//	{
//	}
//}
// MVDataRoot
class CMotionAnalysisSettings
{
	// MPropertyAttributeEditor = "TextBlock()"
	CUtlString m_Description;
	// MPropertyDescription = "Threshold for 'nearly stopped' linear velocity (inches/second)"
	// MPropertyAttributeRange = "0 100"
	float32 m_flLinearThresholdSlow;
	// MPropertyDescription = "Threshold for 'fully stopped' linear velocity (inches/second)"
	// MPropertyAttributeRange = "0 100"
	float32 m_flLinearThresholdStopped;
	// MPropertyDescription = "Threshold for 'nearly stopped' angular velocity (degrees/second)"
	// MPropertyAttributeRange = "0 180"
	float32 m_flAngularThresholdSlow;
	// MPropertyDescription = "Threshold for 'fully stopped' angular velocity (degrees/second)"
	// MPropertyAttributeRange = "0 180"
	float32 m_flAngularThresholdStopped;
	// MPropertyAutoExpandSelf
	CUtlStringMap< CMotionAnalysisSettings_Foot > m_Feet;
};
