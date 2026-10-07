class CDOTA_Ability_Spectre_Reality : public CDOTABaseAbility, public CHorizontalMotionController
{
	int32 may_target_shadow_step;
	int32 m_nProjectileID;
	VectorWS m_vProjectileLocation;
	VectorWS m_vIllusionLocation;
	CHandle< CBaseEntity > m_hIllusion;
};
