// MGetKV3ClassDefaults = {
//	"m_dampedValue": 0.000000,
//	"m_flCycle": 0.000000,
//	"m_flCycleZeroTime": 0.000000,
//	"m_flPlaybackRate": 1.000000,
//	"m_flBlendValue": 0.000000,
//	"m_flDuration": 1.000000,
//	"m_resetCount": 0
//}
class CBlendNodeInstanceData
{
	float32 m_dampedValue;
	float32 m_flCycle;
	float32 m_flCycleZeroTime;
	float32 m_flPlaybackRate;
	CAnimNetVar< float32 > m_flBlendValue;
	float32 m_flDuration;
	CAnimNetVar< uint8 > m_resetCount;
};
