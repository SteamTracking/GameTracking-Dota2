// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_CommentNode",
//	"m_sName": "Unnamed",
//	"m_vecPosition":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_nNodeID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bDebugThisNode": false,
//	"m_networkMode": "ServerAuthoritative",
//	"m_commentText": "",
//	"m_size":
//	[
//		375.000000,
//		225.000000
//	],
//	"m_color":
//	[
//		49,
//		139,
//		146
//	]
//}
// MPropertyFriendlyName = "Comment"
class CAnimGraphDoc_CommentNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CUtlString m_commentText;
	// MPropertySuppressField
	Vector2D m_size;
	// MPropertyFriendlyName = "Color"
	Color m_color;
};
