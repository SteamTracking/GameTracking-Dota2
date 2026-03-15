// MGetKV3ClassDefaults = {
//	"_class": "CCurvesColorCorrectionLayer",
//	"m_name": "Curves 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_curvePointsRGB":
//	[
//		[
//			0.000000,
//			0.000000
//		],
//		[
//			255.000000,
//			255.000000
//		]
//	],
//	"m_curvePointsR":
//	[
//		[
//			0.000000,
//			0.000000
//		],
//		[
//			255.000000,
//			255.000000
//		]
//	],
//	"m_curvePointsG":
//	[
//		[
//			0.000000,
//			0.000000
//		],
//		[
//			255.000000,
//			255.000000
//		]
//	],
//	"m_curvePointsB":
//	[
//		[
//			0.000000,
//			0.000000
//		],
//		[
//			255.000000,
//			255.000000
//		]
//	]
//}
class CCurvesColorCorrectionLayer : public CColorCorrectionLayer
{
	CUtlVector< Vector2D > m_curvePointsRGB;
	CUtlVector< Vector2D > m_curvePointsR;
	CUtlVector< Vector2D > m_curvePointsG;
	CUtlVector< Vector2D > m_curvePointsB;
};
