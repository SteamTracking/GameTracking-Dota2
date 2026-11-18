// MPropertyFriendlyName = "VMix Subgraph Node"
// MPropertyDescription = "Contains a refernce to a subroutine that is authored as a separate graph.  Used to collapse common functions into single blocks."
// MHasKV3TransferPolymorphicClassname
class CMixSubgraph : public CMixPropertyBase
{
	// MPropertyFriendlyName = "File"
	// MPropertyAttributeEditor = "AssetBrowse( vmix )"
	CUtlString subgraphFile; // = "soundstacks/subgraph_default.vmix"
};
