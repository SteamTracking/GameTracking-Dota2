class CBaseMoveBehavior : public CPathKeyFrame
{
	int32 m_iPositionInterpolator;
	int32 m_iRotationInterpolator;
	float32 m_flAnimStartTime;
	float32 m_flAnimEndTime;
	float32 m_flAverageSpeedAcrossFrame;
	CHandle< CPathKeyFrame > m_pCurrentKeyFrame;
	CHandle< CPathKeyFrame > m_pTargetKeyFrame;
	CHandle< CPathKeyFrame > m_pPreKeyFrame;
	CHandle< CPathKeyFrame > m_pPostKeyFrame;
	float32 m_flTimeIntoFrame;
	int32 m_iDirection;
};
