class lerpdata_t
{
	CHandle< CBaseEntity > m_hEnt;
	MoveType_t m_MoveType;
	GameTime_t m_flStartTime;
	VectorWS m_vecStartOrigin;
	Quaternion m_qStartRot;
	ParticleIndex_t m_nFXIndex;
};
