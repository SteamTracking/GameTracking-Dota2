// MGetKV3ClassDefaults = {
//	"_class": "CMixSubgraph",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"subgraphFile": "soundstacks/subgraph_default.vmix",
//	"subgraphName": ""
//}
// MPropertyFriendlyName = "VMix Subgraph Node"
// MPropertyDescription = "Contains a refernce to a subroutine that is authored as a separate graph.  Used to collapse common functions into single blocks."
class CMixSubgraph : public CMixPropertyBase
{
	// MPropertyFriendlyName = "File"
	// MPropertyAttributeEditor = "AssetBrowse( vmix )"
	CUtlString subgraphFile;
	// MPropertyFriendlyName = "Name"
	// MPropertyAttributeChoiceName = "graph_names"
	CUtlString subgraphName;
};
