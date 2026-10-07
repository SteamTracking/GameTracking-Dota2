class CDOTA_Ability_Morphling_Waveform : public CDOTABaseAbility, public CHorizontalMotionController
{
	int32 m_nProjectileID;
	VectorWS m_vProjectileLocation;
	CHandle< CBaseEntity > m_hHitHero;
	bool m_bGrantedGem;
};
