class CSoundEventBoxEntity : public CSoundEventMultiPointEntity
{
	CUtlSymbolLarge[16] m_iszBoxEntities;
	// MNotSaved
	CNetworkUtlVectorBase< SoundeventBoxHelperNetworked_t > m_vecBoxHelpersNetworked;
};
