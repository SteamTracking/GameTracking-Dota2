class CDOTA_Ability_Axe_CullingBlade : public CDOTABaseAbility, public CHorizontalMotionController
{
	bool m_bInterrupted;
	VectorWS m_vProjectileLocation;
	CHandle< CBaseEntity > m_hTarget;
};
