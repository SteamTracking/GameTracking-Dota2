class CDOTA_Modifier_VengefulSpirit_Command_Aura_Effect_Debuff : public CDOTA_Buff
{
	int32 bonus_base_damage;
	int32 max_base_damage;
	float32 effect_time;
	GameTime_t m_flHeroDeathTime;
};
