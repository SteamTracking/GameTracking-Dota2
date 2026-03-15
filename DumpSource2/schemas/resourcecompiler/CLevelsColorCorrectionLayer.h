// MGetKV3ClassDefaults = {
//	"_class": "CLevelsColorCorrectionLayer",
//	"m_name": "Levels 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_nInputBlackPointRGB": 0,
//	"m_nInputBlackPointR": 0,
//	"m_nInputBlackPointG": 0,
//	"m_nInputBlackPointB": 0,
//	"m_nInputWhitePointRGB": 255,
//	"m_nInputWhitePointR": 255,
//	"m_nInputWhitePointG": 255,
//	"m_nInputWhitePointB": 255,
//	"m_nOutputBlackPointRGB": 0,
//	"m_nOutputBlackPointR": 0,
//	"m_nOutputBlackPointG": 0,
//	"m_nOutputBlackPointB": 0,
//	"m_nOutputWhitePointRGB": 255,
//	"m_nOutputWhitePointR": 255,
//	"m_nOutputWhitePointG": 255,
//	"m_nOutputWhitePointB": 255,
//	"m_flGammaRGB": 1.000000,
//	"m_flGammaR": 1.000000,
//	"m_flGammaG": 1.000000,
//	"m_flGammaB": 1.000000
//}
class CLevelsColorCorrectionLayer : public CColorCorrectionLayer
{
	int32 m_nInputBlackPointRGB;
	int32 m_nInputBlackPointR;
	int32 m_nInputBlackPointG;
	int32 m_nInputBlackPointB;
	int32 m_nInputWhitePointRGB;
	int32 m_nInputWhitePointR;
	int32 m_nInputWhitePointG;
	int32 m_nInputWhitePointB;
	int32 m_nOutputBlackPointRGB;
	int32 m_nOutputBlackPointR;
	int32 m_nOutputBlackPointG;
	int32 m_nOutputBlackPointB;
	int32 m_nOutputWhitePointRGB;
	int32 m_nOutputWhitePointR;
	int32 m_nOutputWhitePointG;
	int32 m_nOutputWhitePointB;
	float32 m_flGammaRGB;
	float32 m_flGammaR;
	float32 m_flGammaG;
	float32 m_flGammaB;
};
