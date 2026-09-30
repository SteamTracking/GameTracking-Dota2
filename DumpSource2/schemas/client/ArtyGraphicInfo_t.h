// MVDataRoot
class ArtyGraphicInfo_t
{
	ArtyGraphicID_t m_unID;
	CUtlString m_szSnippet;
	CUtlString m_szUnit;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_szModel;
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szParticle;
	EArtyGraphicsType m_eType; // = "k_eSprite"
	QAngle m_vAngles;
	Vector m_vPosition;
	Vector m_vCameraOffset;
	int32 m_nWidth; // = 32
	int32 m_nHeight; // = 32
	bool m_bPlayEndcap; // = true
	float32 m_flDefaultScale; // = -1
};
