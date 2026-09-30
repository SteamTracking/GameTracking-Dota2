class RnCompound_t
{
	CUtlVector< RnSphere_t > m_Spheres;
	CUtlVector< RnCapsule_t > m_Capsules;
	CUtlVector< RnHull_t > m_Hulls;
	CUtlVector< RnMesh_t > m_Meshes;
	AABB_t m_Bounds;
	Vector m_vOrthographicAreas;
	float32 m_flSurfaceArea;
	float32 m_flVolume;
};
