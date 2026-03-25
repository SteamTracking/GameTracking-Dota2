class CPathNode : public C_PointEntity
{
	Vector m_vInTangentLocal;
	Vector m_vOutTangentLocal;
	CUtlString m_strParentPathUniqueID;
	CUtlString m_strPathNodeParameter;
	CTransformWS m_xWSPrevParent;
	CHandle< CPathWithDynamicNodes > m_hPath;
};
