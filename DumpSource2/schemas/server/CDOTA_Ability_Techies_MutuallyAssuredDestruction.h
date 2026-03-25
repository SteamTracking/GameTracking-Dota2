class CDOTA_Ability_Techies_MutuallyAssuredDestruction : public CDOTABaseAbility
{
	float32 radius;
	float32 explosion_delay;
	float32 max_mana_pct_as_damage;
	float32 base_damage;
	GameTime_t m_ActiveExplodeTime;
	GameTime_t m_PassiveExplodeTime;
	CHandle< CBaseEntity > m_hActiveMAD;
	CHandle< CBaseEntity > m_hPassiveMAD;
};
