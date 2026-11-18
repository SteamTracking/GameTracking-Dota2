class CDOTA_Modifier_Neutral_Gold_Upgrade_Ability : public CDOTA_Buff
{
	float32 damage_pct;
	float32 hp_pct;
	float32 xp_bounty_pct;
	float32 gold_bounty_pct;
	int32 base_xp;
	int32 base_gold_bounty;
	float32 model_scale;
	ParticleIndex_t m_nFxIndex;
};
