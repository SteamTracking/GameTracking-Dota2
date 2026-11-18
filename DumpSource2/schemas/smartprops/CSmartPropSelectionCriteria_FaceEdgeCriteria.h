// MVDataComponentValidGrandParents = "CSmartPropElement_PlaceOnMesh"
// MPropertyFriendlyName = "Filter Faces by Edge"
// MPropertyDescription = "Select faces by one of their edges, counted from the reference edge: whether the edge is open, or the angle to the face on its other side. For pieces that wrap around a corner, such as elbows, test the edge they wrap around and mark the face across it as occupied."
// MHasKV3TransferPolymorphicClassname
class CSmartPropSelectionCriteria_FaceEdgeCriteria : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Edge"
	// MPropertyDescription = "Edge to test, relative to the reference edge which is the bottom edge."
	CSmartPropAttributeMeshFaceEdge m_nEdge; // = "BOTTOM"
	// MPropertyFriendlyName = "Open Edge"
	// MPropertyDescription = "When true, select faces whose edge is open. When false, select faces whose edge is closed and within the angle range."
	CSmartPropAttributeBool m_bOpenEdge;
	// MPropertyFriendlyName = "Min Angle"
	// MPropertyDescription = "Minimum angle in degrees between the face and the face across the edge, [ 0, 180 ]. 90 = box edge or inside corner, 180 = flat."
	// MPropertySuppressExpr = "m_bOpenEdge == true"
	CSmartPropAttributeFloat m_flMinAngle;
	// MPropertyFriendlyName = "Max Angle"
	// MPropertyDescription = "Maximum angle in degrees between the face and the face across the edge, [ 0, 180 ]. 90 = box edge or inside corner, 180 = flat."
	// MPropertySuppressExpr = "m_bOpenEdge == true"
	CSmartPropAttributeFloat m_flMaxAngle; // = 180
	// MPropertyFriendlyName = "Convex"
	// MPropertyDescription = "When true, convex edges such as the edges of a box can match. Flat edges are both convex and concave."
	// MPropertySuppressExpr = "m_bOpenEdge == true"
	CSmartPropAttributeBool m_bConvex; // = true
	// MPropertyFriendlyName = "Concave"
	// MPropertyDescription = "When true, concave edges such as inside corners can match. Flat edges are both convex and concave."
	// MPropertySuppressExpr = "m_bOpenEdge == true"
	CSmartPropAttributeBool m_bConcave; // = true
	// MPropertyFriendlyName = "Invert"
	// MPropertyDescription = "When true, select faces whose edge doesn't match."
	CSmartPropAttributeBool m_bInvert;
	// MPropertyFriendlyName = "Mark Face Across Edge as Occupied"
	// MPropertyDescription = "When true, the face on the other side of the edge is marked as occupied for the faces tested after it and for the following elements, so FaceOccupied() is 1 on it. For pieces that cover both faces. Add a Filter Faces by Occupied that skips occupied faces so an edge shared by two matching faces only gets one piece."
	CSmartPropAttributeBool m_bOccupyFaceAcross;
};
