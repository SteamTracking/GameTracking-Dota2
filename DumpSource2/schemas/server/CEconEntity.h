class CEconEntity : public CBaseAnimatingOverlay, public IHasAttributes
{
	CAttributeContainer m_AttributeManager;
	CHandle< CBaseEntity > m_hOldProvidee;
	int32 m_iOldOwnerClass;
};
