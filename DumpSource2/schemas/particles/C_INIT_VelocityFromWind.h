// MHasKV3TransferPolymorphicClassname
class C_INIT_VelocityFromWind : public CParticleFunctionInitializer
{
	// MPropertyFriendlyName = "sample position"
	CPerParticleVecInput m_vecSamplePosition; // = { "m_nType": "PVEC_TYPE_PARTICLE_VECTOR", "m_nVectorAttribute": 0 }
	// MPropertyFriendlyName = "wind scale"
	CPerParticleFloatInput m_flScale; // = { "m_flLiteralValue": 1 }
	// MPropertyFriendlyName = "sample fans"
	bool m_bSampleFans; // = true
};
