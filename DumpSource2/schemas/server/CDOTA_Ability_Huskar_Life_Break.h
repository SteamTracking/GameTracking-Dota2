class CDOTA_Ability_Huskar_Life_Break : public CDOTABaseAbility, public CHorizontalMotionController
{
	int32 m_nLifeBreakProjectileHandle;
	VectorWS m_vProjectileLocation;
	CHandle< CBaseEntity > m_hTarget;
	bool m_bInterrupted;
};
