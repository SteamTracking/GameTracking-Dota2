// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropOperation_MaterialOverride",
//	"m_bEnabled": true,
//	"m_bClearCurrentOverrides": false,
//	"m_MaterialReplacements":
//	[
//	]
//}
// MPropertyFriendlyName = "Material Override"
// MPropertyDescription = "Specifies a table of material replacements to apply to all following models. Mapping goes from the material specified by the model (including material group selection) to the replacement material. Previous material overrides are not considered when determining the base material."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropOperation_MaterialOverride : public CSmartPropOperation
{
	// MPropertyFriendlyName = "Clear Active Overrides"
	// MPropertyDescription = "If enabled, clear any previous material overrides, so that only the material replacements specified in this table will be active."
	CSmartPropAttributeBool m_bClearCurrentOverrides;
	// MPropertyAutoExpandSelf
	// MPropertyFriendlyName = "Material Replacements"
	// MPropertyDescription = "Table specifying pairs of existing materials and the material to replace them with."
	CUtlVector< CSmartPropMaterialReplacement > m_MaterialReplacements;
};
