class CDOTA_Ability_Kez_Echo_Slash : public CDOTA_Ability_Kez_BaseAbility
{
	Vector m_vInitialDirection;
	VectorWS m_vStartPos;
	CTransformWS m_InitialTransform;
	float32 katana_radius;
	float32 katana_distance;
	float32 travel_distance;
	int32 katana_strikes;
	float32 katana_echo_damage;
	float32 strike_interval;
	float32 effect_duration;
	int32 m_nStrikesLeft;
	GameTime_t m_NextStrikeTime;
	bool m_bBackwardStrikes;
	bool m_bBackwardStrikePending;
	bool m_bStrikingBackward;
	bool m_bStrikePairHitAnyTarget;
	GameTime_t m_NextBackwardStrikeTime;
	bool m_bFlutter;
	ParticleIndex_t m_nFXCast;
};
