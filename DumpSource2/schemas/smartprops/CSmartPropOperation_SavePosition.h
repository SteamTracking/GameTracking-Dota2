// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_SavePosition",
//	"m_bEnabled": true,
//	"m_CoordinateSpace": "WORLD",
//	"m_VariableName": ""
//}
// MPropertyFriendlyName = "Save Current Position"
// MPropertyDescription = "Save the current position to a specified variable in the requested coordinate space"
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_SavePosition : public CSmartPropOperation
{
	// MPropertyDescription = "Specifies the coordinate space of the saved position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace;
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_VariableName;
};
