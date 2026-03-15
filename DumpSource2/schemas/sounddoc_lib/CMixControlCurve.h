// MGetKV3ClassDefaults = {
//	"_class": "CMixControlCurve",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_flInputMin": 0.000000,
//	"m_flInputMax": 1.000000,
//	"m_flOutputMin": 0.000000,
//	"m_flOutputMax": 1.000000,
//	"m_curve":
//	{
//		"m_spline":
//		[
//			{
//				"x": 0.000000,
//				"y": 0.000000,
//				"m_flSlopeIncoming": 1.000000,
//				"m_flSlopeOutgoing": 1.000000
//			},
//			{
//				"x": 1.000000,
//				"y": 1.000000,
//				"m_flSlopeIncoming": 1.000000,
//				"m_flSlopeOutgoing": 1.000000
//			}
//		],
//		"m_tangents":
//		[
//			{
//				"m_nIncomingTangent": "CURVE_TANGENT_SPLINE",
//				"m_nOutgoingTangent": "CURVE_TANGENT_SPLINE"
//			},
//			{
//				"m_nIncomingTangent": "CURVE_TANGENT_SPLINE",
//				"m_nOutgoingTangent": "CURVE_TANGENT_SPLINE"
//			}
//		],
//		"m_vDomainMins":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_vDomainMaxs":
//		[
//			0.000000,
//			0.000000
//		]
//	}
//}
// MPropertyFriendlyName = "VMix Control Curve Node"
// MPropertyDescription = "Remap a control variable through a curve that you define."
class CMixControlCurve : public CMixPropertyBase
{
	float32 m_flInputMin;
	float32 m_flInputMax;
	float32 m_flOutputMin;
	float32 m_flOutputMax;
	// MPropertySuppressField
	CPiecewiseCurve m_curve;
};
