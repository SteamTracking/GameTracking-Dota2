// MGetKV3ClassDefaults = {
//	"_class": "CNmClipDocEvent_MaterialAttribute",
//	"m_flStartTime": 0.000000,
//	"m_flDuration": 0.000000,
//	"m_target": "Self",
//	"m_attributeName": "",
//	"m_x":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
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
//	},
//	"m_y":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
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
//	},
//	"m_z":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
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
//	},
//	"m_w":
//	{
//		"m_spline":
//		[
//		],
//		"m_tangents":
//		[
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
class CNmClipDocEvent_MaterialAttribute : public CNmClipDocEvent
{
	CNmEventTargetEntity_t m_target;
	CUtlString m_attributeName;
	CPiecewiseCurve m_x;
	CPiecewiseCurve m_y;
	CPiecewiseCurve m_z;
	CPiecewiseCurve m_w;
};
