class CDOTA_Ability_SpiritBreaker_ChargeOfDarkness : public CDOTABaseAbility, public CHorizontalMotionController
{
	bool m_bFinished;
	bool m_bInterrupted;
	bool m_bPlayedChargeAnimation;
	VectorWS m_vProjectileLocation;
	VectorWS m_vTargetLocation;
	CHandle< CBaseEntity > m_hTarget;
	CUtlVector< CHandle< CBaseEntity > > m_hTrackingProjectileHits;
	CUtlVector< CDOTA_Tree* > m_hTrackingProjectileTrees;
	int32 nFXIndex;
	int32 m_iCurProjectileIndex;
	int32 m_nBashIndex;
	VectorWS m_vChargeStartPos;
};
