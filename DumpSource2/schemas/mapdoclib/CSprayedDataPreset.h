// MGetKV3ClassDefaults = {
//	"m_nCounterMin": 4,
//	"m_nCounterMax": 4,
//	"m_flSpacing": 64.000000,
//	"m_flRadius": 128.000000,
//	"m_flEraseAmount": 1.000000,
//	"m_bConstantDensity": true,
//	"m_bOnlyHitMeshes": false,
//	"m_bRadialFalloff": true,
//	"m_elements":
//	[
//	]
//}
class CSprayedDataPreset
{
	int32 m_nCounterMin;
	int32 m_nCounterMax;
	float32 m_flSpacing;
	float32 m_flRadius;
	float32 m_flEraseAmount;
	bool m_bConstantDensity;
	bool m_bOnlyHitMeshes;
	bool m_bRadialFalloff;
	CUtlVector< CSprayedDataPresetElement > m_elements;
};
