class CDOTA_Modifier_Mirana_CelestialQuiver : public CDOTA_Buff
{
	int32 bonus_damage;
	int32 quiver_restore;
	float32 bonus_potency;
	CUtlVector< AttackRecord_t > m_InFlightAttackRecords;
};
