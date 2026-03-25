// MGetKV3ClassDefaults = {
//	"m_nBands": 3,
//	"m_scene":
//	{
//	},
//	"m_grid":
//	{
//		"m_aabb":
//		{
//			"m_vMinBounds":
//			[
//				0.000000,
//				0.000000,
//				0.000000
//			],
//			"m_vMaxBounds":
//			[
//				0.000000,
//				0.000000,
//				0.000000
//			]
//		},
//		"m_flSpacing": 0.000000,
//		"m_nx": 0,
//		"m_ny": 0,
//		"m_nz": 0,
//		"m_vecLineSegments":
//		[
//		],
//		"m_vecProbes":
//		[
//		]
//	},
//	"m_reverbSettings":
//	{
//		"m_nNumRays": 0,
//		"m_nNumBounces": 0,
//		"m_flIRDuration": 0.000000,
//		"m_nAmbisonicsOrder": 0,
//		"m_bExportScene": false
//	},
//	"m_reverbClusteringSettings":
//	{
//		"m_bEnableClustering": false,
//		"m_nCubeMapResolution": 0,
//		"m_flDepthThreshold": 0.000000
//	},
//	"m_reverbCompressionSettings":
//	{
//		"m_bEnableCompression": false,
//		"m_flQuality": 0.950000
//	},
//	"m_vecClusterForProbe":
//	[
//	],
//	"m_compressedData":
//	{
//		"m_nChannels": 0,
//		"m_nBands": 0,
//		"m_nBins": 0,
//		"m_nProbes": 0,
//		"m_vecNumSingularValues":
//		[
//		],
//		"m_vecDictionary":
//		[
//		],
//		"m_vecCompressedData":
//		[
//		]
//	},
//	"m_compressedClusteredData":
//	{
//		"m_nChannels": 0,
//		"m_nBands": 0,
//		"m_nBins": 0,
//		"m_nProbes": 0,
//		"m_vecNumSingularValues":
//		[
//		],
//		"m_vecDictionary":
//		[
//		],
//		"m_vecCompressedData":
//		[
//		]
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
class CSteamAudioBakedReverbData
{
	int32 m_nBands;
	CSteamAudioSceneData m_scene;
	CSteamAudioProbeData m_probes;
	CSteamAudioProbeGrid m_grid;
	SteamAudioReverbSettings_t m_reverbSettings;
	SteamAudioReverbClusteringSettings_t m_reverbClusteringSettings;
	SteamAudioReverbCompressionSettings_t m_reverbCompressionSettings;
	CSteamAudioProbeData m_clusteredProbes;
	CUtlVector< int16 > m_vecClusterForProbe;
	CSteamAudioCompressedReverb m_compressedData;
	CSteamAudioCompressedReverb m_compressedClusteredData;
	CSteamAudioMovableBakedData< CSteamAudioBakedReverbData > m_movables;
};
