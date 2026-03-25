class DynamicVolumeDef_t
{
	CHandle< CBaseEntity > m_source;
	CHandle< CBaseEntity > m_target;
	int32 m_nHullIdx;
	VectorWS m_vSourceAnchorPos;
	VectorWS m_vTargetAnchorPos;
	uint32 m_nAreaSrc;
	uint32 m_nAreaDst;
	bool m_bAttached;
};
