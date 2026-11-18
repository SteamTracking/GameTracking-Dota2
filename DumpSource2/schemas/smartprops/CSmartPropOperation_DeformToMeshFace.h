// MPropertyFriendlyName = "Transform: Deform to Mesh Face"
// MPropertyDescription = "Stretch the element onto the quad it is placed on with a lattice deformer. The box from the origin to ( UScale(), VScale() ) is mapped onto the corners of the quad, with its height along the face normal. The lattice stays on the face, other modifiers move the content inside it. Has no effect on faces that aren't quads."
// MVDataClassGroup = "Transform"
// MVDataComponentRequiresAncestor = "CSmartPropElement_PlaceOnMesh"
// MHasKV3TransferPolymorphicClassname
class CSmartPropOperation_DeformToMeshFace : public CSmartPropTransformOperation
{
	// MPropertyFriendlyName = "Keep Cross Section"
	// MPropertyDescription = "Which way the piece runs, so the height at each of its ends scales with the width of the face there and a round pipe stays round when the face tapers. Off keeps a fixed height."
	CSmartPropAttributeMeshFaceCrossSection m_nCrossSection; // = "ALONG_Y"
	// MPropertyFriendlyName = "Miter Edges"
	// MPropertyDescription = "When true, the top of the element is cut along a miter at each closed edge, so elements on neighboring faces meet without gaps or overlaps. Requires consistent face winding."
	CSmartPropAttributeBool m_bMiterEdges;
	// MPropertyFriendlyName = "Miter Smooth Edges Only"
	// MPropertyDescription = "When true, hard edges get a square cut instead of a miter."
	// MPropertySuppressExpr = "m_bMiterEdges == false"
	CSmartPropAttributeBool m_bMiterSmoothEdgesOnly;
	// MPropertyFriendlyName = "Miter Limit"
	// MPropertyDescription = "Largest angle in degrees between the face normals of an edge that is still mitered, sharper turns get a square cut. 90 = right angle corner."
	// MPropertySuppressExpr = "m_bMiterEdges == false"
	CSmartPropAttributeFloat m_flMiterLimit; // = 90
};
