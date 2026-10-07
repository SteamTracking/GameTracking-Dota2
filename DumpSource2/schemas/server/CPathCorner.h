class CPathCorner : public CPointEntity
{
	bool m_bTriggerLocomotionStop;
	bool m_bSmoothArrival;
	bool m_bExactPositioning;
	float32 m_flWait;
	float32 m_flRadius;
	float32 m_flWaypointSuccessRadiusWhenBlocked;
	float32 m_flWaypointSuccessRadius;
	float32 m_flPathEndDistanceFromGoal;
	float32 m_flSpeed;
	CEntityIOOutput m_OnPass;
};
