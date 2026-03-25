class CEnvLightProbeVolume : public CBaseEntity
{
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_AmbientCube;
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SDF;
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_DC;
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_R;
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_G;
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeTexture_SH2_B;
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightIndicesTexture;
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightScalarsTexture;
	CStrongHandle< InfoForResourceTypeCTextureBase > m_Entity_hLightProbeDirectLightShadowsTexture;
	Vector m_Entity_vBoxMins;
	Vector m_Entity_vBoxMaxs;
	bool m_Entity_bMoveable;
	int32 m_Entity_nHandshake;
	int32 m_Entity_nPriority;
	bool m_Entity_bStartDisabled;
	int32 m_Entity_nLightProbeSizeX;
	int32 m_Entity_nLightProbeSizeY;
	int32 m_Entity_nLightProbeSizeZ;
	int32 m_Entity_nLightProbeAtlasX;
	int32 m_Entity_nLightProbeAtlasY;
	int32 m_Entity_nLightProbeAtlasZ;
	bool m_Entity_bEnabled;
};
