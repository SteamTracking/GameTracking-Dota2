// MGetKV3ClassDefaults = {
//	"m_xLastPredictedTransformsDeltas":
//	[
//	],
//	"m_dampedTurnValue": 0.000000,
//	"m_flTurnAmount": 0.000000,
//	"m_flPredictionScale": 1.000000,
//	"m_flLastPathTime": 0.000000
//}
class CFollowPathInstanceData
{
	CRelativeArray< CMotionTransform > m_xLastPredictedTransformsDeltas;
	float32 m_dampedTurnValue;
	float32 m_flTurnAmount;
	CAnimNetVar< float32 > m_flPredictionScale;
	float32 m_flLastPathTime;
};
