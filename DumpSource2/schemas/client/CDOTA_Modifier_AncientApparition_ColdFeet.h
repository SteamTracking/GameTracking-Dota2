class CDOTA_Modifier_AncientApparition_ColdFeet : public CDOTA_Buff
{
	VectorWS m_vecStartPosition;
	int32 m_nCurrentTick;
	float32 break_distance;
	float32 stun_duration;
	int32 damage_per_second;
	float32 aoe;
	int32 movement_slow;
	bool leash;
};
