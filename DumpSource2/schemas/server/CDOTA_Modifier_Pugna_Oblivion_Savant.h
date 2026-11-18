class CDOTA_Modifier_Pugna_Oblivion_Savant : public CDOTA_Buff
{
	float32 tower_scale;
	CUtlVector< CHandle< CDOTABaseAbility > > m_vecRecastAbilities;
	CUtlVector< GameTime_t > m_vecRecastCooldownEnds;
};
