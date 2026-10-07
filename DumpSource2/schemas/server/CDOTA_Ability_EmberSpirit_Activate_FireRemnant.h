class CDOTA_Ability_EmberSpirit_Activate_FireRemnant : public CDOTABaseAbility, public CHorizontalMotionController
{
	int32 m_nProjectileID;
	VectorWS m_vStartLocation;
	VectorWS m_vProjectileLocation;
	QAngle m_ProjectileAngles;
	CHandle< CBaseEntity > m_hRemnantToKill;
	bool m_bProjectileStarted;
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList;
};
