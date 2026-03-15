// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropPulse_CreateSizer",
//	"m_nEditorNodeID": -1,
//	"m_Name": "",
//	"m_bHACK_ProvideResultMinX": false,
//	"m_bHACK_ProvideResultMaxX": false,
//	"m_bHACK_ProvideResultMinY": false,
//	"m_bHACK_ProvideResultMaxY": false,
//	"m_bHACK_ProvideResultMinZ": false,
//	"m_bHACK_ProvideResultMaxZ": false
//}
// MPropertyFriendlyName = "Create Sizer"
// MPropertyDescription = "Create a sizer that will be displayed at the current location, allowing the user to manipulate the specified set of size values."
// MVDataClassGroup (UNKNOWN FOR PARSER)
class CSmartPropPulse_CreateSizer : public CPulseCell_BaseFlow
{
	// MPropertyFriendlyName = "Name"
	// MPropertyDescription = "Name used to identify the sizer. Must be unique within the paraent element."
	CUtlString m_Name;
	bool m_bHACK_ProvideResultMinX;
	bool m_bHACK_ProvideResultMaxX;
	bool m_bHACK_ProvideResultMinY;
	bool m_bHACK_ProvideResultMaxY;
	bool m_bHACK_ProvideResultMinZ;
	bool m_bHACK_ProvideResultMaxZ;
};
