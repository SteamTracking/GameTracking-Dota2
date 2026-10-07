class CDOTA_Ability_NianCharge : public CDOTABaseAbility, public CHorizontalMotionController
{
	bool m_bChargeFinished;
	bool m_bPlayedChargeAnimation;
	bool m_bPinning;
	GameTime_t m_flPinStartTime;
	VectorWS m_vProjectileLocation;
	VectorWS m_vTargetLocation;
	CHandle< CBaseEntity > m_hTarget;
	CUtlVector< CHandle< CBaseEntity > > m_hTrackingProjectileHits;
	CUtlVector< CDOTA_Tree* > m_hTrackingProjectileTrees;
	int32 nFXIndex;
	int32 m_iCurProjectileIndex;
};
