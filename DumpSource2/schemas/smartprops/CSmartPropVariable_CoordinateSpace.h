// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_CoordinateSpace",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": "WORLD"
//}
// MPropertyFriendlyName = "Coordinate Space"
// MPropertyDescription = "Specifies a coordinate space in which a point or vector value is defined."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropVariable_CoordinateSpace : public CSmartPropVariable
{
	SmartPropSpace_t m_DefaultValue;
};
