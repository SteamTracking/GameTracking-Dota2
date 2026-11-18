class CDOTA_Modifier_OgreSeal_Flop : public CDOTA_Buff
{
	float32 m_flTotalTime;
	float32 m_flInitialVelocity;
	VectorWS m_vStartPosition;
	Vector m_vTargetHorizontalDirection;
	float32 m_flCurrentTimeHoriz;
	float32 m_flCurrentTimeVert;
	bool m_bInterrupted;
	VectorWS m_vLastOrderPos;
	bool m_bIssuedOrder;
	int32 m_nCurrentBounce;
	int32 leap_distance;
	float32 leap_speed;
	float32 leap_acceleration;
	float32 m_flFacingTarget;
	float32 movement_turn_rate;
};
