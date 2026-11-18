// MPropertyFriendlyName = "Mesh Reference Edge"
// MPropertyDescription = "Specifies which edge of each face a place on mesh element uses as the bottom edge of the elements it places."
// MVDataClassGroup = "Enumerator Types"
// MHasKV3TransferPolymorphicClassname
class CSmartPropVariable_OrientationMode : public CSmartPropVariable
{
	SmartPropPlaceMeshOrientationMode_t m_DefaultValue; // = "FIRST_CLOSED_EDGE"
};
