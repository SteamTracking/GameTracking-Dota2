class CMoverPathNode : public CPathNode
{
	CEntityOutputTemplate< CUtlString > m_OnStartFromOrInSegment;
	CEntityOutputTemplate< CUtlString > m_OnStoppedAtOrInSegment;
	CEntityOutputTemplate< CUtlString > m_OnPassThrough;
	CEntityOutputTemplate< CUtlString > m_OnPassThroughForward;
	CEntityOutputTemplate< CUtlString > m_OnPassThroughReverse;
};
