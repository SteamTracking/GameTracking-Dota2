class CPathWithDynamicNodes : public CPathSimple
{
	CNetworkUtlVectorBase< CHandle< CPathNode > > m_vecPathNodes;
	CTransform m_xInitialPathWorldToLocal;
};
