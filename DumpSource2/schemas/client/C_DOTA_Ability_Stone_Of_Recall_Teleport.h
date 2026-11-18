class C_DOTA_Ability_Stone_Of_Recall_Teleport : public C_DOTABaseAbility
{
	CHandle< C_BaseEntity > m_hTarget;
	float32 m_flChannelTime;
	VectorWS m_vEndLoc;
};
