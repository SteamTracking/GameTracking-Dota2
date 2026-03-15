// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_SaveDirection",
//	"m_bEnabled": true,
//	"m_DirectionVector": "FORWARD",
//	"m_CoordinateSpace": "WORLD",
//	"m_VariableName": ""
//}
// MPropertyFriendlyName = "Save Direction Vector"
// MPropertyDescription = "Save the specified direction vector to a specified variable, in the requested coordinate space"
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_SaveDirection : public CSmartPropOperation
{
	// MPropertyDescription = "Specifies which direction vector to save."
	CSmartPropAttributeDirection m_DirectionVector;
	// MPropertyDescription = "Specifies the coordinate space of the saved position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace;
	// MPropertyAttributeEditor = "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_VariableName;
};
