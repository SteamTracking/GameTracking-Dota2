// MGetKV3ClassDefaults = {
//	"m_hSequence": 0,
//	"m_flPrevCycle": 0.000000,
//	"m_flCycle": 0.000000,
//	"m_flWeight": 0.000000,
//	"m_nOrder": 12,
//	"m_bLooping": false,
//	"m_nFlags": 0,
//	"m_bSequenceFinished": false,
//	"m_flKillRate": 100.000000,
//	"m_flKillDelay": 0.000000,
//	"m_nPriority": 0
//}
class CAnimationLayer
{
	CAnimNetVar< int32 > m_hSequence;
	float32 m_flPrevCycle;
	CAnimNetVar< float32 > m_flCycle;
	CAnimNetVar< float32 > m_flWeight;
	CAnimNetVar< int32 > m_nOrder;
	bool m_bLooping;
	int32 m_nFlags;
	bool m_bSequenceFinished;
	float32 m_flKillRate;
	float32 m_flKillDelay;
	int32 m_nPriority;
};
