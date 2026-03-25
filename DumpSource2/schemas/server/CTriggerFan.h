class CTriggerFan : public CBaseTrigger
{
	Vector m_vFanOriginOffset;
	Vector m_vDirection;
	bool m_bPushTowardsInfoTarget;
	bool m_bPushAwayFromInfoTarget;
	Quaternion m_qNoiseDelta;
	CHandle< CInfoFan > m_hInfoFan;
	float32 m_flForce;
	bool m_bFalloff;
	CountdownTimer m_RampTimer;
	VectorWS m_vFanOriginWS;
	Vector m_vFanOriginLS;
	Vector m_vFanEndLS;
	Vector m_vNoiseDirectionTarget;
	CUtlSymbolLarge m_iszInfoFan;
	float32 m_flRopeForceScale;
	float32 m_flParticleForceScale;
	float32 m_flPlayerForce;
	bool m_bPlayerWindblock;
	float32 m_flNPCForce;
	float32 m_flRampTime;
	float32 m_fNoiseDegrees;
	float32 m_fNoiseSpeed;
	bool m_bPushPlayer;
	bool m_bRampDown;
	int32 m_nManagerFanIdx;
};
