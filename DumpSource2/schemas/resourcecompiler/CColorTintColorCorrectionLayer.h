// MGetKV3ClassDefaults = {
//	"_class": "CColorTintColorCorrectionLayer",
//	"m_name": "Color Tint 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_nTintColorR": 255,
//	"m_nTintColorG": 150,
//	"m_nTintColorB": 20,
//	"m_nStrength": 20,
//	"m_bPreserveLuminosity": true
//}
class CColorTintColorCorrectionLayer : public CColorCorrectionLayer
{
	int32 m_nTintColorR;
	int32 m_nTintColorG;
	int32 m_nTintColorB;
	int32 m_nStrength;
	bool m_bPreserveLuminosity;
};
