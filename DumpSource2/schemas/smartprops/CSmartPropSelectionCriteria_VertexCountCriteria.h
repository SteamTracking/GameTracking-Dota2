// MVDataComponentValidGrandParents = "CSmartPropElement_PlaceOnMesh"
// MPropertyFriendlyName = "Filter Faces by Vertex Count"
// MPropertyDescription = "Select faces with the given number of vertices."
// MHasKV3TransferPolymorphicClassname
class CSmartPropSelectionCriteria_VertexCountCriteria : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Vertex Count"
	// MPropertyDescription = "Number of vertices, for example 4 for quads."
	CSmartPropAttributeInt m_nTargetVertexCount;
};
