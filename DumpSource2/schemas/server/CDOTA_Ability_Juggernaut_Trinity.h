class CDOTA_Ability_Juggernaut_Trinity : public CDOTABaseAbility
{
	Vector m_vStartPos;
	Vector m_vEndPos;
	Vector m_vDirection;
	int32 m_nCurrentJump;
	int32 m_nProjectileID;
	CUtlVector< CHandle< CBaseEntity > > m_hAlreadyHitList;
	int32 max_jumps;
	float32 jump_speed;
	int32 jump_attack_radius;
	int32 attack_count;
};
