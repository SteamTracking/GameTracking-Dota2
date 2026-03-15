// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_SaveSurfaceNormal",
//	"m_bEnabled": true,
//	"m_CoordinateSpace": "WORLD",
//	"m_VariableName": ""
//}
// MPropertyFriendlyName = "Save Current Surface Normal"
// MPropertyDescription = "Save the current surface normal to a specified variable in the requested coordinate space"
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_SaveSurfaceNormal : public CSmartPropOperation
{
	// MPropertyDescription = "Specifies the coordinate space of the saved position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace;
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_VariableName;
};
