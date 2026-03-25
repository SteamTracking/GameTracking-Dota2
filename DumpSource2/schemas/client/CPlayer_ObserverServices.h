class CPlayer_ObserverServices : public CPlayerPawnComponent
{
	uint8 m_iObserverMode;
	CHandle< C_BaseEntity > m_hObserverTarget;
	ObserverMode_t m_iObserverLastMode;
	bool m_bForcedObserverMode;
	// MNotSaved
	float32 m_flObserverChaseDistance;
	// MNotSaved
	GameTime_t m_flObserverChaseDistanceCalcTime;
};
