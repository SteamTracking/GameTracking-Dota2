// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropPulse_CreateRotator",
//	"m_nEditorNodeID": -1,
//	"m_Name": ""
//}
// MPropertyFriendlyName = "Create Rotator"
// MPropertyDescription = "Create a rotator that will be displayed at the current location, allowing the user to manipulate a rotation around an axis. The rotation value can be applied to the current transform as well as saved to a variable."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropPulse_CreateRotator : public CPulseCell_BaseFlow
{
	// MPropertyFriendlyName = "Name"
	// MPropertyDescription = "Name used to identify the rotator. Must be unique within the parent element."
	CUtlString m_Name;
};
