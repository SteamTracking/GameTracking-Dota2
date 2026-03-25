class C_DOTA_Ability_Techies_MutuallyAssuredDestruction : public C_DOTABaseAbility
{
	float32 radius;
	float32 explosion_delay;
	float32 max_mana_pct_as_damage;
	float32 base_damage;
	GameTime_t m_ActiveExplodeTime;
	GameTime_t m_PassiveExplodeTime;
	CHandle< C_BaseEntity > m_hPassiveMAD;
};
