// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_PlaceOnMesh",
//	"m_nElementID": -1,
//	"m_bEnabled": true,
//	"m_sLabel": "",
//	"m_SelectionCriteria":
//	[
//	],
//	"m_Modifiers":
//	[
//	],
//	"m_Children":
//	[
//	],
//	"m_nPickMode": "FIRST_CLOSED_EDGE",
//	"m_MeshName": ""
//}
// MVDataExperimentalNodeSet (UNKNOWN FOR PARSER)
// MPropertyFriendlyName = "Place on Mesh"
// MPropertyDescription = "Place Children on Mesh Components."
class CSmartPropElement_PlaceOnMesh : public CSmartPropElement_Deformer
{
	// MPropertyStartGroup = ""
	// MPropertyFriendlyName = "Orientation Mode"
	// MPropertyDescription = "Determine how child elements are oriented when mapped to face."
	CSmartPropAttributeOrientationMode m_nPickMode;
	// MPropertyDescription = ""
	CUtlString m_MeshName;
};
