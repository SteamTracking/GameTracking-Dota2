// MGetKV3ClassDefaults = {
//	"m_nChannels": 0,
//	"m_nBands": 0,
//	"m_nBins": 0,
//	"m_nProbes": 0,
//	"m_vecNumSingularValues":
//	[
//	],
//	"m_vecDictionary":
//	[
//	],
//	"m_vecCompressedData":
//	[
//	]
//}
class CSteamAudioCompressedReverb
{
	int32 m_nChannels;
	int32 m_nBands;
	int32 m_nBins;
	int32 m_nProbes;
	CUtlVector< int32 > m_vecNumSingularValues;
	CUtlVector< float32 > m_vecDictionary;
	CUtlVector< float32 > m_vecCompressedData;
	IPLCompressedEnergyFields m_pCompressedData;
};
