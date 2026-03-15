// MGetKV3ClassDefaults = {
//	"_class": "CColorBalanceColorCorrectionLayer",
//	"m_name": "Color Balance 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_nRedCyanBalS": 0,
//	"m_nRedCyanBalM": 0,
//	"m_nRedCyanBalH": 0,
//	"m_nGreenMagentaBalS": 0,
//	"m_nGreenMagentaBalM": 0,
//	"m_nGreenMagentaBalH": 0,
//	"m_nBlueYellowBalS": 0,
//	"m_nBlueYellowBalM": 0,
//	"m_nBlueYellowBalH": 0,
//	"m_bPreserveLuminosity": true
//}
class CColorBalanceColorCorrectionLayer : public CColorCorrectionLayer
{
	int32 m_nRedCyanBalS;
	int32 m_nRedCyanBalM;
	int32 m_nRedCyanBalH;
	int32 m_nGreenMagentaBalS;
	int32 m_nGreenMagentaBalM;
	int32 m_nGreenMagentaBalH;
	int32 m_nBlueYellowBalS;
	int32 m_nBlueYellowBalM;
	int32 m_nBlueYellowBalH;
	bool m_bPreserveLuminosity;
};
