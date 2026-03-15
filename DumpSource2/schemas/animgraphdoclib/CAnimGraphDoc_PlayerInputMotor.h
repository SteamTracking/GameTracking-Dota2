// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_PlayerInputMotor",
//	"m_name": "Unnamed Motor",
//	"m_bDefault": false,
//	"m_sampleTimes":
//	[
//	],
//	"m_bUseAcceleration": false,
//	"m_flSpringConstant": 10.000000,
//	"m_flAnticipationDistance": 0.000000,
//	"m_anticipationPosParamName": "",
//	"m_anticipationPosParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_anticipationHeadingParamName": "",
//	"m_anticipationHeadingParam":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	}
//}
// MPropertyFriendlyName = "Player Input Motor"
class CAnimGraphDoc_PlayerInputMotor : public CAnimGraphDoc_Motor
{
	// MPropertyFriendlyName = "Sample Times"
	CUtlVector< float32 > m_sampleTimes;
	// MPropertyFriendlyName = "Use Acceleration"
	bool m_bUseAcceleration;
	// MPropertyFriendlyName = "Spring Constant"
	float32 m_flSpringConstant;
	// MPropertyFriendlyName = "Anticipation Distance"
	float32 m_flAnticipationDistance;
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
};
