class CPathWithDynamicNodes : public CPathSimple
{
	C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes;
	CTransform m_xInitialPathWorldToLocal;
	DirectionAlongSimplePath_t m_eDesiredDirection;
	bool m_bIgnoreParentRotation;
	bool m_bAlwaysReevaluateSpline;
};
