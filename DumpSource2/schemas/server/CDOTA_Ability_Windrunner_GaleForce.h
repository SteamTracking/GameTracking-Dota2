class CDOTA_Ability_Windrunner_GaleForce : public CDOTABaseAbility
{
	VectorWS m_vEndpoint;
	VectorWS m_vFlowPosition;
	float32 duration;
	CHandle< CBaseEntity > m_hThinker;
};
