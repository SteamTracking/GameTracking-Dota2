// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropSelectionCriteria_TopoEdgeCountCriteria",
//	"m_bEnabled": true,
//	"m_nTargetOpenEdgeCount": 0,
//	"m_bInvert": false,
//	"m_bSharedVert": false
//}
// MVDataComponentValidGrandParents (UNKNOWN FOR PARSER)
// MPropertyFriendlyName = "Filter Faces By Open Edges"
// MPropertyDescription = ""
class CSmartPropSelectionCriteria_TopoEdgeCountCriteria : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Edge Count"
	// MPropertyDescription = "Iterate through faces with 'n' open edges (edges with only one neighboring face)."
	CSmartPropAttributeInt m_nTargetOpenEdgeCount;
	// MPropertyFriendlyName = "Use Closed Edges"
	// MPropertyDescription = "When true, we only consider closed edges (edges with exactly two neighboring faces)."
	CSmartPropAttributeBool m_bInvert;
	// MPropertyFriendlyName = "Enforce Shared Vert"
	// MPropertyDescription = "When true, only consider open/closed edges that share a vert with another open/closed edge."
	CSmartPropAttributeBool m_bSharedVert;
};
