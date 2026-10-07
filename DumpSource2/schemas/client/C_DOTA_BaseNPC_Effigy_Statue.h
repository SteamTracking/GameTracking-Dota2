class C_DOTA_BaseNPC_Effigy_Statue : public C_DOTA_BaseNPC_Building
{
	CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hEffigyParticleDef;
	EEvent m_eEffigyEvent;
	int32 m_nEffigyLevel;
	int32 m_nQuality;
};
