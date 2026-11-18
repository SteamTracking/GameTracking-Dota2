// MVDataExperimentalNodeSet = "smartprops"
// MPropertyFriendlyName = "Place on Mesh"
// MPropertyDescription = "Place elements on the faces of a mesh selected by their selection criteria. Elements are placed in order and several elements can be placed on the same face. Each element tests the faces in mesh order. FaceOccupied() is 1 on faces a previous element, or this element on a face tested earlier, was placed on or marked as occupied across an edge, so an element can skip them with Filter Faces by Occupied. The origin of the element is the corner where the reference edge starts, local X runs along the reference edge, Y points into the face and Z is the face normal. UScale() and VScale() are the size of the face along X and Y. EdgeOpen( n ) and EdgeAngle( n ) describe the edges of the face, see Filter by Expression."
// MHasKV3TransferPolymorphicClassname
class CSmartPropElement_PlaceOnMesh : public CSmartPropElement_Deformer
{
	// MPropertyStartGroup = ""
	// MPropertyFriendlyName = "Reference Edge"
	// MPropertyDescription = "Edge of each face that is the bottom edge of the elements placed on it. Local X runs along it, counter-clockwise around the face, Y points into the face and Z is the face normal. The origin is the corner of the face where the reference edge starts."
	CSmartPropAttributeOrientationMode m_nPickMode; // = "FIRST_CLOSED_EDGE"
	// MPropertyFriendlyName = "Axis"
	// MPropertyDescription = "Direction the reference edge should run along."
	// MPropertySuppressExpr = "( m_nPickMode != OBJECT_SPACE ) && ( m_nPickMode != WORLD_AXIS )"
	CSmartPropAttributeVector m_vReferenceAxis; // = [ 1, 0, 0 ]
	// MPropertyFriendlyName = "Axis Points Into Face"
	// MPropertyDescription = "When true, the reference edge is the edge whose direction into the face, local Y, points most along the axis, instead of the edge that runs most along it. For example an edge running along +X on a face with normal -Y points into the face along +Z."
	// MPropertySuppressExpr = "( m_nPickMode != OBJECT_SPACE ) && ( m_nPickMode != WORLD_AXIS )"
	CSmartPropAttributeBool m_bAxisPointsIntoFace;
	// MPropertyFriendlyName = "Mesh Name"
	// MPropertyDescription = "Name of the mesh to use. This mesh name will show up in the property editor when selecting a placement of this smart prop in Hammer, allowing selection of a mesh object in the map to use."
	CUtlString m_MeshName;
};
