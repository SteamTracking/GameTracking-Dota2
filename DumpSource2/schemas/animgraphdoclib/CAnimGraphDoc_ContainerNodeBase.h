// MGetKV3ClassDefaults = Could not parse KV3 Defaults
class CAnimGraphDoc_ContainerNodeBase : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	AnimNodeID m_inputNodeID;
	// MPropertySuppressField
	AnimNodeID m_outputNodeID;
	// MPropertySuppressField
	CUtlHashtable< AnimNodeOutputID, CAnimGraphDoc_NodeConnection > m_inputConnectionMap;
};
