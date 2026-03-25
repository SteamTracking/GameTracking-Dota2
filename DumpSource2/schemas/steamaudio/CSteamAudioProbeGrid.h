// MGetKV3ClassDefaults = {
//	"m_aabb":
//	{
//		"m_vMinBounds":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		],
//		"m_vMaxBounds":
//		[
//			0.000000,
//			0.000000,
//			0.000000
//		]
//	},
//	"m_flSpacing": 0.000000,
//	"m_nx": 0,
//	"m_ny": 0,
//	"m_nz": 0,
//	"m_vecLineSegments":
//	[
//	],
//	"m_vecProbes":
//	[
//	]
//}
class CSteamAudioProbeGrid
{
	AABB_t m_aabb;
	float32 m_flSpacing;
	int32 m_nx;
	int32 m_ny;
	int32 m_nz;
	CUtlVector< CSteamAudioProbeLineSegment > m_vecLineSegments;
	CUtlVector< Vector > m_vecProbes;
};
