// MGetKV3ClassDefaults = {
//	"m_settings":
//	{
//		"m_bEnablePathing": false,
//		"m_bEnableReflections": false,
//		"m_nReflectionRays": 0,
//		"m_nReflectionBounces": 0
//	},
//	"m_probes":
//	{
//	},
//	"m_vecPathingRatio":
//	[
//	],
//	"m_vecPathingDeviation":
//	[
//	],
//	"m_vecReflectionRatio":
//	[
//	]
//}
class CSteamAudioBakedOcclusionData
{
	SteamAudioCustomDataOcclusionSettings_t m_settings;
	CSteamAudioProbeData m_probes;
	CUtlVector< float32 > m_vecPathingRatio;
	CUtlVector< float32 > m_vecPathingDeviation;
	CUtlVector< float32 > m_vecReflectionRatio;
};
