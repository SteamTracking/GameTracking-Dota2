// MGetKV3ClassDefaults = {
//	"m_nConfigIndex":
//	{
//		"m_index": 4294967295
//	},
//	"m_flCycleZeroTime": 0.000000,
//	"m_flPlaybackSpeed": 1.000000,
//	"m_flStartTime": 0.000000,
//	"m_nSample": -1
//}
class MotionSelection
{
	NetVarConfigIndex m_nConfigIndex;
	CAnimNetVar< float32 > m_flCycleZeroTime;
	CAnimNetVar< float32 > m_flPlaybackSpeed;
	CAnimNetVar< float32 > m_flStartTime;
	int32 m_nSample;
};
