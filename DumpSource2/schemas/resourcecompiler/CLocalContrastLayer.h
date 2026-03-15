// MGetKV3ClassDefaults = {
//	"_class": "CLocalContrastLayer",
//	"m_name": "Local Contrast 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_params":
//	{
//		"m_flLocalContrastStrength": 0.000000,
//		"m_flLocalContrastEdgeStrength": 0.000000,
//		"m_flLocalContrastVignetteStart": 0.000000,
//		"m_flLocalContrastVignetteEnd": 0.000000,
//		"m_flLocalContrastVignetteBlur": 0.000000
//	}
//}
class CLocalContrastLayer : public CColorCorrectionLayer
{
	PostProcessingLocalContrastParameters_t m_params;
};
