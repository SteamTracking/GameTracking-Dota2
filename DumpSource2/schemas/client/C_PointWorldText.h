class C_PointWorldText : public C_ModelPointEntity
{
	// MNotSaved
	bool m_bForceRecreateNextUpdate;
	int32 m_nTextWidthPx;
	int32 m_nTextHeightPx;
	char[512] m_messageText;
	// MNotSaved
	char[64] m_FontName;
	// MNotSaved
	char[64] m_BackgroundMaterialName;
	// MNotSaved
	bool m_bEnabled;
	// MNotSaved
	bool m_bFullbright;
	// MNotSaved
	float32 m_flWorldUnitsPerPx;
	// MNotSaved
	float32 m_flFontSize;
	// MNotSaved
	float32 m_flDepthOffset;
	// MNotSaved
	bool m_bDrawBackground;
	// MNotSaved
	float32 m_flBackgroundBorderWidth;
	// MNotSaved
	float32 m_flBackgroundBorderHeight;
	// MNotSaved
	float32 m_flBackgroundWorldToUV;
	// MNotSaved
	Color m_Color;
	// MNotSaved
	PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal;
	// MNotSaved
	PointWorldTextJustifyVertical_t m_nJustifyVertical;
	// MNotSaved
	PointWorldTextReorientMode_t m_nReorientMode;
};
