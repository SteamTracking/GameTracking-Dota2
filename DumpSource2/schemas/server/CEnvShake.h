class CEnvShake : public CPointEntity
{
	CUtlSymbolLarge m_limitToEntity;
	float32 m_Amplitude;
	float32 m_Frequency;
	float32 m_Duration;
	float32 m_Radius;
	GameTime_t m_stopTime;
	GameTime_t m_nextShake;
	float32 m_currentAmp;
	Vector m_maxForce;
	// MPhysPtr
	IPhysicsMotionController* m_pShakeController;
	CPhysicsShake m_shakeCallback;
};
