// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropVariable_GridOriginMode",
//	"m_nElementID": -1,
//	"m_VariableName": "",
//	"m_bExposeAsParameter": false,
//	"m_DisplayName": "",
//	"m_HideExpression": "",
//	"m_ReadOnlyExpression": "",
//	"m_DefaultValue": "CENTER"
//}
// MPropertyFriendlyName = "Grid Origin"
// MPropertyDescription = "Specifies where the origin of a child element is placed realative to each grid cell."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropVariable_GridOriginMode : public CSmartPropVariable
{
	SmartPropGridOriginBasis_t m_DefaultValue;
};
