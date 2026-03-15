// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_DampedPathMotor",
//	"m_name": "Unnamed Motor",
//	"m_bDefault": false,
//	"m_bLockToPath": true,
//	"m_flAnticipationTime": 1.000000,
//	"m_flMinSpeedScale": 0.250000,
//	"m_anticipationPosParamName": "",
//	"m_anticipationPosParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_anticipationHeadingParamName": "",
//	"m_anticipationHeadingParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_flSpringConstant": 10.000000,
//	"m_flMinSpringTension": 1.000000,
//	"m_flMaxSpringTension": 100.000000
//}
// MPropertyFriendlyName = "Damped Path Motor"
class CAnimGraphDoc_DampedPathMotor : public CAnimGraphDoc_PathMotorBase
{
	// MPropertyFriendlyName = "Anticipation Time"
	float32 m_flAnticipationTime;
	// MPropertyFriendlyName = "Minimum Speed Percentage"
	float32 m_flMinSpeedScale;
	// MPropertySuppressField
	CUtlString m_anticipationPosParamName;
	// MPropertyFriendlyName = "Anticipation Position Parameter"
	// MPropertyAttributeChoiceName = "VectorParameter"
	AnimParamID m_anticipationPosParam;
	// MPropertySuppressField
	CUtlString m_anticipationHeadingParamName;
	// MPropertyFriendlyName = "Anticipation Heading Parameter"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_anticipationHeadingParam;
	// MPropertyFriendlyName = "Spring Constant"
	// MPropertyGroupName = "+Stopping:Arrival Damping"
	float32 m_flSpringConstant;
	// MPropertyFriendlyName = "Min Tension"
	// MPropertyGroupName = "+Stopping:Arrival Damping"
	float32 m_flMinSpringTension;
	// MPropertyFriendlyName = "Max Tension"
	// MPropertyGroupName = "+Stopping:Arrival Damping"
	float32 m_flMaxSpringTension;
};
