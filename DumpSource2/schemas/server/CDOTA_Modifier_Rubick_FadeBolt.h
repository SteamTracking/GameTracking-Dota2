class CDOTA_Modifier_Rubick_FadeBolt : public CDOTA_Buff
{
	float32 radius;
	int32 damage;
	int32 jump_damage_reduction_pct;
	int32 attack_damage_reduction;
	int32 attack_damage_reduction_creep_reduction_pct;
	int32 steals_damage;
	float32 jump_delay;
	int32 m_iCurJumpCount;
	VectorWS m_vCurTargetLoc;
	CUtlVector< CHandle< CBaseEntity > > m_hHitEntities;
};
