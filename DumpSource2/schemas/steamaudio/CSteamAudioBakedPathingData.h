// MGetKV3ClassDefaults = {
//	"m_nBands": 3,
//	"m_probes":
//	{
//	},
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
class CSteamAudioBakedPathingData
{
	int32 m_nBands;
	CSteamAudioProbeData m_probes;
	CSteamAudioMovableBakedData< CSteamAudioBakedPathingData > m_movables;
};
