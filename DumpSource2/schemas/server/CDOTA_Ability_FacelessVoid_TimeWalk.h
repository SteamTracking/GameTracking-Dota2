class CDOTA_Ability_FacelessVoid_TimeWalk : public CDOTABaseAbility, public CHorizontalMotionController
{
	CHandle< CDOTABaseAbility > m_hSourceAbilityForStolen;
	int32 speed;
	int32 range;
	float32 radius;
	int32 m_nProjectileID;
	VectorWS m_vProjectileLocation;
	VectorWS m_vStartLocation;
};
