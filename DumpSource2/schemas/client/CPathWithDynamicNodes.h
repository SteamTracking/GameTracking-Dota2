class CPathWithDynamicNodes : public CPathSimple
{
	C_NetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes;
	CTransform m_xInitialPathWorldToLocal;
};
