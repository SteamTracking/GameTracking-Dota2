// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_RadiusPlacementMode",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": "SPHERE"
//}
// MPropertyFriendlyName = "Placement Shape"
// MPropertyDescription = "Specifies the shape (circle, or sphere) to use with elements that place children within a radius."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropVariable_RadiusPlacementMode : public CSmartPropVariable
{
	SmartPropRadiusPlacementMode_t m_DefaultValue;
};
