// MGetKV3ClassDefaults = {
//	"m_flTimeInState": 0.000000,
//	"m_currentTransitionIndex": -1,
//	"m_prevStateIndex": -1,
//	"m_scheduledTransitionIndex": -1
//}
class CStateMachineInstanceData
{
	float32 m_flTimeInState;
	CAnimNetVar< int32 > m_currentTransitionIndex;
	int32 m_prevStateIndex;
	int32 m_scheduledTransitionIndex;
};
