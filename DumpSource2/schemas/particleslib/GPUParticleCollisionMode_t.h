enum GPUParticleCollisionMode_t : uint32_t
{
	// MPropertyFriendlyName = "Raytracing TLAS"
	PARTICLE_GPU_COLLISION_MODE_RT = 0,
	// MPropertyFriendlyName = "Primary View Depth Buffer"
	PARTICLE_GPU_COLLISION_MODE_DEPTH = 1,
	// MPropertyFriendlyName = "Hybrid RT + Depth Buffer"
	PARTICLE_GPU_COLLISION_MODE_HYBRID = 2,
};
