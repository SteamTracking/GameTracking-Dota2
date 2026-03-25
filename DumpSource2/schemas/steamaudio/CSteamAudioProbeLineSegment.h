// MGetKV3ClassDefaults = {
//	"m_vStart":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vEnd":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vecIntervals":
//	[
//	],
//	"m_vecProbeIndices":
//	[
//	]
//}
class CSteamAudioProbeLineSegment
{
	Vector m_vStart;
	Vector m_vEnd;
	CUtlVector< float32 > m_vecIntervals;
	CUtlVector< int32 > m_vecProbeIndices;
};
