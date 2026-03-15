// MGetKV3ClassDefaults = {
//	"_class": "CFogScatteringLayer",
//	"m_name": "Fog Scattering 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_params":
//	{
//		"m_fRadius": 0.750000,
//		"m_fScale": 0.000000,
//		"m_fCubemapScale": 1.000000,
//		"m_fVolumetricScale": 1.000000,
//		"m_fGradientScale": 1.000000
//	}
//}
class CFogScatteringLayer : public CColorCorrectionLayer
{
	PostProcessingFogScatteringParameters_t m_params;
};
