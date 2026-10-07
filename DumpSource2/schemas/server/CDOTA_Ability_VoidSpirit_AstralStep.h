class CDOTA_Ability_VoidSpirit_AstralStep : public CDOTABaseAbility
{
	VectorWS m_vStartPos;
	VectorWS m_vDestination;
	Vector m_vDirection;
	float32 radius;
	float32 min_travel_distance;
	float32 max_travel_distance;
	float32 debuff_duration;
	float32 pop_damage_delay;
};
