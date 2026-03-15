// MGetKV3ClassDefaults = {
//	"_class": "CBrightnessContrastColorCorrectionLayer",
//	"m_name": "Brightness/Contrast 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_nBrightness": 0,
//	"m_nContrast": 0
//}
class CBrightnessContrastColorCorrectionLayer : public CColorCorrectionLayer
{
	int32 m_nBrightness;
	int32 m_nContrast;
};
