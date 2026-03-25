class CTriggerFan : public C_BaseTrigger
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
};
