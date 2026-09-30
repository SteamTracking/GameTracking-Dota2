class CDOTACrownfallCreditsMapSceneDefinition
{
	CPanoramaImageName m_strImage;
	CPanoramaImageName m_strImageMask;
	Vector2D m_vViewStart;
	Vector2D m_vViewEnd;
	CrownfallCreditsAABB_t m_bounds; // = { "h": -1, "w": -1, "x": 0, "y": 0 }
	int32 m_nAnimOffsetX;
	int32 m_nAnimOffsetY;
	CUtlVector< CDOTACrownfallCreditsMapSceneAnimateableDefinition > m_vecAnimations;
	bool m_bScale;
};
