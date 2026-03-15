// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocGraph",
//	"m_ID": <HIDDEN FOR DIFF>,
//	"m_nodes":
//	[
//	],
//	"m_graphType": "Invalid",
//	"m_viewOffset":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_flViewZoom": 1.000000
//}
class CNmGraphDocGraph
{
	V_uuid_t m_ID;
	CUtlVector< CNmGraphDocNode* > m_nodes;
	NmGraphDocGraphType_t m_graphType;
	Vector2D m_viewOffset;
	float32 m_flViewZoom;
};
