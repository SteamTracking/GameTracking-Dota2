// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_NodeManager",
//	"m_nodes":
//	[
//	]
//}
class CAnimGraphDoc_NodeManager
{
	// MPropertySuppressField
	CUtlHashtable< AnimNodeID, CSmartPtr< CAnimGraphDoc_Node > > m_nodes;
};
