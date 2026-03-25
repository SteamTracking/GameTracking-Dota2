// MGetKV3ClassDefaults = {
//	"m_settings":
//	{
//		"m_nAmbisonicsOrderOutsideField": 0,
//		"m_nAmbisonicsOrderInsideSizeField": 0,
//		"m_flOutsideThreshold": 0.000000,
//		"m_flSizeThreshold": 0.000000,
//		"m_flInsideThreshold": 0.000000
//	},
//	"m_probes":
//	{
//	},
//	"m_vecInOut":
//	[
//	],
//	"m_vecSize":
//	[
//	],
//	"m_vecOutsideField":
//	[
//	],
//	"m_vecInsideSmallSizeField":
//	[
//	],
//	"m_movables":
//	{
//		"m_vecData":
//		[
//		],
//		"m_vecInitialTransforms":
//		[
//		],
//		"m_vecAABBs":
//		[
//		],
//		"m_vecKeys":
//		[
//		]
//	}
//}
class CSteamAudioBakedDimensionsData
{
	SteamAudioCustomDataDimensionsSettings_t m_settings;
	CSteamAudioProbeData m_probes;
	CUtlVector< float32 > m_vecInOut;
	CUtlVector< float32 > m_vecSize;
	CUtlVector< CSteamAudioAmbisonicsField > m_vecOutsideField;
	CUtlVector< CSteamAudioAmbisonicsField > m_vecInsideSmallSizeField;
	CSteamAudioMovableBakedData< CSteamAudioBakedDimensionsData > m_movables;
};
