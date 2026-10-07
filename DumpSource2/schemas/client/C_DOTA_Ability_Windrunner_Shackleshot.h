class C_DOTA_Ability_Windrunner_Shackleshot : public C_DOTABaseAbility
{
	int32 shackle_count;
	VectorWS m_vArrowAvgPos;
	VectorWS m_vArrowStartPos;
	VectorWS m_vArrowStartPos2;
	VectorWS m_vArrowStartPos3;
	CHandle< C_BaseEntity > m_hTarget;
};
