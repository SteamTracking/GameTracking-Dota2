// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropPulse_CreateLocator",
//	"m_nEditorNodeID": -1,
//	"m_LocatorName": ""
//}
// MPropertyFriendlyName = "Create Locator"
// MPropertyDescription = "Create a locator with the current transform. The locator may optionally be configurable, so that its transform can be modified in Hammer."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropPulse_CreateLocator : public CSmartPropPulse_BaseQueryableFlow
{
	// MPropertyFriendlyName = "Name"
	// MPropertyDescription = "Name of the locator. This can be used to reference the locator in this element or its children. If the locator is configurable, the locator will be identified by this name in Hammer."
	CUtlString m_LocatorName;
};
