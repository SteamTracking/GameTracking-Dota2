// MGetKV3ClassDefaults = {
//	"_class": "CColorLookupColorCorrectionLayer",
//	"m_name": "Lookup Table 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_fileName": "",
//	"m_lut":
//	[
//	],
//	"m_nDim": 0
//}
class CColorLookupColorCorrectionLayer : public CColorCorrectionLayer
{
	CUtlString m_fileName;
	CUtlVector< float32 > m_lut;
	int32 m_nDim;
};
