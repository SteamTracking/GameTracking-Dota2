// MVDataComponentValidGrandParents = "CSmartPropElement_PlaceOnMesh"
// MPropertyFriendlyName = "Filter by Expression"
// MPropertyDescription = "Skip faces for which the expression is false. Tested after the other criteria, so UScale(), VScale(), FaceOccupied(), EdgeOpen( n ) and EdgeAngle( n ) return the values of the face being tested. n is the edge counted counter-clockwise from the reference edge: 0 = bottom, 1 = right, 2 = top, -1 = left. EdgeAngle() is the bend across the edge in degrees, 0 = flat, positive = convex, negative = concave, 0 for open edges. Variables set on this element aren't visible to the expression."
// MHasKV3TransferPolymorphicClassname
class CSmartPropSelectionCriteria_ExpressionCriteria : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Valid When"
	// MPropertyDescription = "Expression to evaluate for each face, the element is only placed where the result is true."
	// MPropertyAttributeEditor = "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression;
};
