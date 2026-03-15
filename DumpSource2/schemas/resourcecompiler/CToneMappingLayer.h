// MGetKV3ClassDefaults = {
//	"_class": "CToneMappingLayer",
//	"m_name": "Tone Mapping 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_params":
//	{
//		"m_flExposureBias": 0.000000,
//		"m_flShoulderStrength": 0.150000,
//		"m_flLinearStrength": 0.500000,
//		"m_flLinearAngle": 0.100000,
//		"m_flToeStrength": 0.200000,
//		"m_flToeNum": 0.020000,
//		"m_flToeDenom": 0.300000,
//		"m_flWhitePoint": 4.000000,
//		"m_flLuminanceSource": 0.000000,
//		"m_flExposureBiasShadows": 0.000000,
//		"m_flExposureBiasHighlights": 0.000000,
//		"m_flMinShadowLum": 0.000000,
//		"m_flMaxShadowLum": 0.500000,
//		"m_flMinHighlightLum": 2.000000,
//		"m_flMaxHighlightLum": 8.000000
//	}
//}
class CToneMappingLayer : public CColorCorrectionLayer
{
	PostProcessingTonemapParameters_t m_params;
};
