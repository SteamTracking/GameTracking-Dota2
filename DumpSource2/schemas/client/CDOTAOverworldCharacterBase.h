// MVDataRoot
class CDOTAOverworldCharacterBase
{
	CPanoramaImageName m_sImage;
	CUtlString m_sClassName;
	Vector2D m_vSize;
	Vector2D m_vOffset;
	uint16 m_unFrameWidth;
	uint16 m_unFrameTime; // = 100
	bool m_bUse3dPreview;
	HeroID_t m_nPreviewHeroID;
};
