// MVDataComponentValidGrandParents = "CSmartPropElement_PlaceOnMesh"
// MPropertyFriendlyName = "Filter Faces by Material"
// MPropertyDescription = "Select faces that use the given material."
// MHasKV3TransferPolymorphicClassname
class CSmartPropSelectionCriteria_MaterialCriteria : public CSmartPropSelectionCriteria
{
	// MPropertyFriendlyName = "Material"
	// MPropertyDescription = "Material the faces use."
	CSmartPropAttributeMaterialName m_material;
	// MPropertyFriendlyName = "Invert"
	// MPropertyDescription = "When true, select faces that don't use the material."
	CSmartPropAttributeBool m_bInvert;
};
