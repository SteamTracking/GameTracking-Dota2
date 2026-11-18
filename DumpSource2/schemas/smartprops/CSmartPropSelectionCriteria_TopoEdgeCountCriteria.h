// MVDataComponentValidGrandParents = "CSmartPropElement_PlaceOnMesh"
// MPropertyFriendlyName = "Filter by Topology"
// MPropertyDescription = "Select faces with the given number of open edges, closed edges or edges. Open edges are on the border of the mesh and used by one face, closed edges are shared by two faces."
// MHasKV3TransferPolymorphicClassname
class CSmartPropSelectionCriteria_TopoEdgeCountCriteria : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Target Edge Count"
	// MPropertyDescription = "Number of edges to match."
	CSmartPropAttributeInt m_nTargetOpenEdgeCount;
	// MPropertyFriendlyName = "Count Edges"
	// MPropertyDescription = "Which edges are counted: open, closed or both."
	CSmartPropAttributeMeshEdgeType m_nEdgeType; // = "OPEN"
	// MPropertyFriendlyName = "Adjacent Edges Only"
	// MPropertyDescription = "When true, only count edges that share a vertex with another counted edge. When false, only count edges that don't."
	CSmartPropAttributeBool m_bSharedVert;
};
