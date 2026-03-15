// MGetKV3ClassDefaults = Could not parse KV3 Defaults
class CNmGraphDocVariationDataNode : public CNmGraphDocFlowNode
{
	// MPropertySuppressField
	CNmGraphDocVariationDataNode::CData* m_pDefaultVariationData;
	// MPropertySuppressField
	CUtlVector< CNmGraphDocVariationDataNode::OverrideValue_t > m_overrides;
	// MPropertySuppressField
	CResourceName m_defaultResourceName;
};
