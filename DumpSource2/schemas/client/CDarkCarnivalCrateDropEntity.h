// MEntityAllowsPortraitWorldSpawn
class CDarkCarnivalCrateDropEntity : public C_PhysicsProp
{
	DOTACrateDropObjectDefID_t m_unDefID;
	float32 m_flAcceleration;
	float32 m_flMaxSpeed;
	int8 m_nTutorialObject;
	int8 m_nDisableSpawnRotation;
	float32 m_flPoints;
	float32 m_flHazardExplosionRadius;
	float32 m_flExplosionStrength;
	float32 m_flUpkickExplosionStrength;
	float32 m_flTriggerDelay;
	float32 m_flTriggeredGravityScale;
	bool m_bHasBeenTriggered;
	bool m_bHazardDefused;
	bool m_bCurrentlyActivated;
	GameTime_t m_flNextPossibleTriggerTime;
	GameTime_t m_flCreationTime;
	CNewParticleEffect* pDropEffect;
	bool m_bMarkedForDestroy;
	bool m_bHazardRotationApplied;
};
