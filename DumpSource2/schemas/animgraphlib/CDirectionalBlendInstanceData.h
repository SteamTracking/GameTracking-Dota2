// MGetKV3ClassDefaults = {
//	"m_dampedValue": 0.000000,
//	"m_flCycle": 0.000000,
//	"m_flPrevCycle": 0.000000,
//	"m_flPlaybackRate": 1.000000,
//	"m_flCycleZeroTime": 0.000000,
//	"m_resetCycleValue": 0.000000,
//	"m_resetCount": 0.000000
//}
class CDirectionalBlendInstanceData
{
	float32 m_dampedValue;
	float32 m_flCycle;
	float32 m_flPrevCycle;
	CAnimNetVar< float32 > m_flPlaybackRate;
	CAnimNetVar< float32 > m_flCycleZeroTime;
	CAnimNetVar< float32 > m_resetCycleValue;
	CAnimNetVar< float32 > m_resetCount;
};
