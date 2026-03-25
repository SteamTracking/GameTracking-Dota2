class CDOTA_Modifier_Enigma_DemonicConversion : public CDOTA_Modifier_Kill
{
	int32 m_iAttackCount;
	int32 split_attack_count;
	float32 life_extension;
	int32 eidolon_attack_range;
	int32 eidolon_bonus_damage;
	int32 eidolon_bonus_attack_speed;
	int32 eidelon_max_health;
	int32 eidolon_magic_resist;
	int32 eidelon_base_damage;
	int32 eidelon_damage_spread;
	int32 eidelon_base_movespeed;
	int32 eidolon_xp_bounty;
	int32 eidolon_gold_bounty_min;
	int32 eidolon_gold_bounty_max;
	int32 current_health_pct;
	bool m_bAllowSplit;
	int32 m_nSpawnNum;
	CHandle< CDOTA_BaseNPC > attack_target;
};
