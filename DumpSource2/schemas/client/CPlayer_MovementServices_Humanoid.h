class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
	float32 m_flStepSoundTime;
	float32 m_flFallVelocity;
	// MNotSaved
	Vector m_groundNormal;
	float32 m_flSurfaceFriction;
	// MNotSaved
	CUtlStringToken m_surfaceProps;
	int32 m_nStepside;
};
