// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_OrientationMode",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": "FIRST_OPEN_EDGE"
//}
// MPropertyFriendlyName = "Fit on Line Pick Mode"
// MPropertyDescription = "Specifies how a fit on line element will pick which child elements it will place."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropVariable_OrientationMode : public CSmartPropVariable
{
	SmartPropPlaceMeshOrientationMode_t m_DefaultValue;
};
