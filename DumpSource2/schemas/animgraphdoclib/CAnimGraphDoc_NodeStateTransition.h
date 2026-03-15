// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_NodeStateTransition",
//	"m_conditionList":
//	{
//		"_class": "CAnimGraphDoc_ConditionContainer",
//		"m_conditions":
//		[
//		]
//	},
//	"m_srcState":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_destState":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_sComment": "",
//	"m_bDisabled": false,
//	"m_blendDuration":
//	{
//		"_class": "CFloatAnimValue",
//		"m_flConstValue": 0.200000,
//		"m_paramName": "",
//		"m_paramID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_eSource": "Constant"
//	},
//	"m_bReset": true,
//	"m_resetCycleOption": "Beginning",
//	"m_flFixedCycleValue":
//	{
//		"_class": "CFloatAnimValue",
//		"m_flConstValue": 0.000000,
//		"m_paramName": "",
//		"m_paramID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_eSource": "Constant"
//	},
//	"m_blendCurve":
//	{
//		"m_flControlPoint1": 0.000000,
//		"m_flControlPoint2": 1.000000
//	}
//}
class CAnimGraphDoc_NodeStateTransition : public CAnimGraphDoc_StateTransition
{
	// MPropertyFriendlyName = "Blend Duration"
	CFloatAnimValue m_blendDuration;
	// MPropertyFriendlyName = "Reset Destination"
	bool m_bReset;
	// MPropertyFriendlyName = "Start Cycle At"
	ResetCycleOption m_resetCycleOption;
	// MPropertyFriendlyName = "Fixed Start Cycle Value"
	CFloatAnimValue m_flFixedCycleValue;
	// MPropertySuppressField
	CBlendCurve m_blendCurve;
};
