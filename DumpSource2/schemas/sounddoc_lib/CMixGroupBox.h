// MGetKV3ClassDefaults = {
//	"_class": "CMixGroupBox",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_color":
//	[
//		40,
//		40,
//		70,
//		100
//	],
//	"m_bMovesNodes": true
//}
// MPropertyFriendlyName = "VMix Group Box"
// MPropertyDescription = "Groups a set of nodes.  Comments/colors will get displayed in the graph and on node editors.  A group box allows the user to drag the entire group as one object."
class CMixGroupBox : public CMixPropertyBase
{
	// MPropertyFriendlyName = "Background Color"
	Color m_color;
	// MPropertyFriendlyName = "Move contained nodes"
	bool m_bMovesNodes;
};
