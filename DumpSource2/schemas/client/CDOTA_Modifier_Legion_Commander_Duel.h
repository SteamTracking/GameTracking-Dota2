class CDOTA_Modifier_Legion_Commander_Duel : public CDOTA_Buff
{
	int32 reward_damage;
	int32 assist_reward_damage;
	int32 damage_reduction_pct;
	int32 debuff_immunity;
	int32 team_duel;
	int32 trigger_pta_on_victory;
	int32 duel_refresh_on_victory;
	bool m_bAttacked;
	bool m_bHadAVictor;
	GameTime_t m_flTimeDuelStart;
	CHandle< C_BaseEntity > m_hPartner;
	float32 m_flNextTime;
	CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList;
	CUtlVector< CHandle< C_BaseEntity > > m_hAllyAssisters;
	CUtlVector< CHandle< C_BaseEntity > > m_hEnemyAssisters;
};
