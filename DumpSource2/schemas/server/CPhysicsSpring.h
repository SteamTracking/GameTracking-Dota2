class CPhysicsSpring : public CBaseEntity
{
	// MPhysPtr
	IPhysicsJoint* m_pSpringJoint;
	float32 m_flFrequency;
	float32 m_flDampingRatio;
	float32 m_flRestLength;
	CUtlSymbolLarge m_nameAttachStart;
	CUtlSymbolLarge m_nameAttachEnd;
	VectorWS m_start;
	VectorWS m_end;
	// MNotSaved
	uint32 m_teleportTick;
};
