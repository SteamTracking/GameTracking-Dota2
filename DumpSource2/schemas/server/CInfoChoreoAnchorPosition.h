class CInfoChoreoAnchorPosition
{
	Vector m_vOriginLS;
	Quaternion m_qAnglesLS;
	Vector m_vExtentsMin; // = [ 0, -20, 0 ]
	Vector m_vExtentsMax; // = [ 0, 20, 0 ]
	float32 m_flRadius; // = 12
	float32 m_flToleranceAngle;
	bool m_bOnlyWarpPosition;
	bool m_bDontSnapToNav;
	bool m_bDontSnapToGround;
	float32 m_flMaxDistanceFromNav; // = 50
	float32 m_flGroundTraceDistance; // = 36
	CHandle< CBaseEntity > m_hParent;
	CInfoChoreoLocatorShapeType_t m_nShapeType; // = "POINT"
};
