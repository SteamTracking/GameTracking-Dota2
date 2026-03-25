class CDOTA_Modifier_Mars_ArenaOfBlood : public CDOTA_Buff
{
	float32 radius;
	int32 width;
	int32 spear_damage;
	int32 spear_distance_from_wall;
	float32 spear_attack_interval;
	bool pierces_debuff_immunity;
	int32 m_hObstruction;
	CUtlVector< Vector > m_vecAvoidLocations;
};
