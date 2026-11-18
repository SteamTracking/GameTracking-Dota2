// MPropertyFriendlyName = "Mesh Face Cross Section"
// MPropertyDescription = "Specifies which way a piece deformed onto a mesh face runs, so its cross-section keeps its proportions when the face tapers."
// MVDataClassGroup = "Enumerator Types"
// MHasKV3TransferPolymorphicClassname
class CSmartPropVariable_MeshFaceCrossSection : public CSmartPropVariable
{
	SmartPropMeshFaceCrossSection_t m_DefaultValue; // = "ALONG_Y"
};
