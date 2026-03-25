class CDOTA_Modifier_Rubick_Might_And_Magus : public CDOTA_Buff
{
	int32 magic_resist_bonus;
	float32 aoe_bonus;
	float32 aoe_bonus_duration;
	CUtlVector< GameTime_t > m_vecAoEExpireTimes;
};
