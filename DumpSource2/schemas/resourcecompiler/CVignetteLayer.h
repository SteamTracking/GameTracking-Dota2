// MGetKV3ClassDefaults = {
//	"_class": "CVignetteLayer",
//	"m_name": "Vignette 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_params":
//	{
//		"m_flVignetteStrength": 0.000000,
//		"m_vCenter":
//		[
//			0.000000,
//			0.000000
//		],
//		"m_flRadius": 0.500000,
//		"m_flRoundness": 1.000000,
//		"m_flFeather": 0.500000,
//		"m_vColorTint":
//		[
//			1.000000,
//			1.000000,
//			1.000000
//		]
//	}
//}
class CVignetteLayer : public CColorCorrectionLayer
{
	PostProcessingVignetteParameters_t m_params;
};
