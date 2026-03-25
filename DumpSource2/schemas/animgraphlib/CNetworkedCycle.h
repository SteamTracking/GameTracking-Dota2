// MGetKV3ClassDefaults = {
//	"m_flCycleUnclamped": 0.000000,
//	"m_flPrevCycleUnclamped": 0.000000,
//	"m_flCyclesPerSecond": 1.000000,
//	"m_flCycleZeroTime": 0.000000,
//	"m_resetCount": 0
//}
class CNetworkedCycle
{
	float32 m_flCycleUnclamped;
	float32 m_flPrevCycleUnclamped;
	CAnimNetVar< float32 > m_flCyclesPerSecond;
	CAnimNetVar< float32 > m_flCycleZeroTime;
	CAnimNetVar< uint8 > m_resetCount;
};
