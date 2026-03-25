// MGetKV3ClassDefaults = {
//	"m_vTargetPosition":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_flTargetFacing": 0.000000,
//	"m_flInterpEndTime": -1.000000,
//	"m_weights":
//	[
//		0.000000,
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_sequences":
//	[
//		{
//			"m_hSequence": -1,
//			"m_cycle":
//			{
//				"m_flCycleUnclamped": 0.000000,
//				"m_flPrevCycleUnclamped": 0.000000,
//				"m_flCyclesPerSecond": 1.000000,
//				"m_flCycleZeroTime": 0.000000,
//				"m_resetCount": 0
//			}
//		},
//		{
//			"m_hSequence": -1,
//			"m_cycle":
//			{
//				"m_flCycleUnclamped": 0.000000,
//				"m_flPrevCycleUnclamped": 0.000000,
//				"m_flCyclesPerSecond": 1.000000,
//				"m_flCycleZeroTime": 0.000000,
//				"m_resetCount": 0
//			}
//		},
//		{
//			"m_hSequence": -1,
//			"m_cycle":
//			{
//				"m_flCycleUnclamped": 0.000000,
//				"m_flPrevCycleUnclamped": 0.000000,
//				"m_flCyclesPerSecond": 1.000000,
//				"m_flCycleZeroTime": 0.000000,
//				"m_resetCount": 0
//			}
//		},
//		{
//			"m_hSequence": -1,
//			"m_cycle":
//			{
//				"m_flCycleUnclamped": 0.000000,
//				"m_flPrevCycleUnclamped": 0.000000,
//				"m_flCyclesPerSecond": 1.000000,
//				"m_flCycleZeroTime": 0.000000,
//				"m_resetCount": 0
//			}
//		}
//	],
//	"m_currentSequenceIndex": 0,
//	"m_currentSequenceData": 0,
//	"m_flFadeInTime": 0.200000,
//	"m_flFadeOutTime": 0.200000,
//	"m_flForcedCycle": -1.000000,
//	"m_bResetPending": false,
//	"m_SequenceCycleZeroTime": 0.000000
//}
class CDirectPlaybackInstanceData
{
	Vector m_vTargetPosition;
	float32 m_flTargetFacing;
	float32 m_flInterpEndTime;
	float32[4] m_weights;
	SequenceData[4] m_sequences;
	uint32 m_currentSequenceIndex;
	CAnimNetVar< uint64 > m_currentSequenceData;
	float32 m_flFadeInTime;
	float32 m_flFadeOutTime;
	CAnimNetVar< float32 > m_flForcedCycle;
	bool m_bResetPending;
	CAnimNetVar< float32 > m_SequenceCycleZeroTime;
};
