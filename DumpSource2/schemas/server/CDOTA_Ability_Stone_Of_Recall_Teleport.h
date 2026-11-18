class CDOTA_Ability_Stone_Of_Recall_Teleport : public CDOTABaseAbility
{
	CHandle< CBaseEntity > m_hTarget;
	float32 m_flChannelTime;
	VectorWS m_vEndLoc;
};
