// MVDataComponentValidGrandParents = "CSmartPropElement_PlaceOnMesh"
// MPropertyFriendlyName = "Filter Faces by Occupied"
// MPropertyDescription = "Select faces by whether they are occupied, the same as FaceOccupied(). A face is occupied if a previous element, or this element on a face tested earlier, was placed on it or marked it as occupied across an edge."
// MHasKV3TransferPolymorphicClassname
class CSmartPropSelectionCriteria_FaceOccupiedCriteria : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Occupied"
	// MPropertyDescription = "When true, select faces that are occupied. When false, select faces that aren't."
	CSmartPropAttributeBool m_bOccupied;
};
