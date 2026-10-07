class CDOTA_Ability_Windrunner_Shackleshot : public CDOTABaseAbility
{
	int32 shackle_count;
	VectorWS m_vArrowAvgPos;
	VectorWS m_vArrowStartPos;
	VectorWS m_vArrowStartPos2;
	VectorWS m_vArrowStartPos3;
	CHandle< CBaseEntity > m_hTarget;
	CUtlVector< CHandle< CDOTA_BaseNPC > > m_vecShackledUnits;
};
