// MGPUParticleFunction
// MHasKV3TransferPolymorphicClassname
class C_INIT_SkyVisCull : public CParticleFunctionInitializer
{
	// MPropertyFriendlyName = "test position"
	// MVectorIsCoordinate
	CPerParticleVecInput m_vecTestPosition; // = { "m_nType": "PVEC_TYPE_PARTICLE_VECTOR", "m_nVectorAttribute": 0 }
	// MPropertyFriendlyName = "test direction"
	// MVectorIsCoordinate
	CParticleCollectionVecInput m_vecTestDir; // = { "m_vLiteralValue": [ 0, 0, 1 ] }
	// MPropertyFriendlyName = "Trace Set"
	// MPropertySuppressExpr = "!is_gpu_particle_system"
	ParticleTraceSet_t m_nTraceSet; // = "PARTICLE_TRACE_SET_STATIC"
	// MPropertyFriendlyName = "cull on sky"
	bool m_bCullOnSky;
};
