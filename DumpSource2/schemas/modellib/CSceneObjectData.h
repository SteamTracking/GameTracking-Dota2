class CSceneObjectData
{
	Vector m_vMinBounds; // = [ 340282349999999991754788743781432688640, 340282349999999991754788743781432688640, 340282349999999991754788743781432688640 ]
	Vector m_vMaxBounds; // = [ -340282349999999991754788743781432688640, -340282349999999991754788743781432688640, -340282349999999991754788743781432688640 ]
	CUtlLeanVector< CMaterialDrawDescriptor > m_drawCalls;
	CUtlLeanVector< AABB_t > m_drawBounds;
	CUtlLeanVector< CMeshletDescriptor > m_meshlets;
	CUtlLeanVector< CSceneObjectData::RTProxyDrawDescriptor_t > m_rtProxyDrawCalls;
	Vector4D m_vTintColor;
};
