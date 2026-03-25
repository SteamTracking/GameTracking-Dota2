class CRagdollProp : public CBaseAnimGraph
{
	ragdoll_t m_ragdoll;
	bool m_bStartDisabled;
	CNetworkUtlVectorBase< bool > m_ragEnabled;
	CNetworkUtlVectorBase< Vector > m_ragPos;
	CNetworkUtlVectorBase< QAngle > m_ragAngles;
	uint32 m_lastUpdateTickCount;
	bool m_allAsleep;
	bool m_bFirstCollisionAfterLaunch;
	INavObstacle::NavObstacleType_t m_nNavObstacleType;
	bool m_bUpdateNavWhenMoving;
	bool m_bForceNavObstacleCut;
	bool m_bAttachedToReferenceFrame;
	CHandle< CBaseEntity > m_hDamageEntity;
	CHandle< CBaseEntity > m_hKiller;
	CHandle< CBasePlayerPawn > m_hPhysicsAttacker;
	GameTime_t m_flLastPhysicsInfluenceTime;
	GameTime_t m_flFadeOutStartTime;
	float32 m_flFadeTime;
	VectorWS m_vecLastOrigin;
	GameTime_t m_flAwakeTime;
	GameTime_t m_flLastOriginChangeTime;
	CUtlSymbolLarge m_strOriginClassName;
	CUtlSymbolLarge m_strSourceClassName;
	bool m_bHasBeenPhysgunned;
	// MNotSaved
	bool m_bAllowStretch;
	float32 m_flBlendWeight;
	float32 m_flDefaultFadeScale;
	// MNotSaved
	CUtlVector< Vector > m_ragdollMins;
	// MNotSaved
	CUtlVector< Vector > m_ragdollMaxs;
	// MNotSaved
	bool m_bShouldDeleteActivationRecord;
	// MNotSaved
	CUtlVector< INavObstacle* > m_vecNavObstacles;
};
