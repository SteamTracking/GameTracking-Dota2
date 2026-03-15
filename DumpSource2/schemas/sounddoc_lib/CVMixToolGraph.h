// MGetKV3ClassDefaults = {
//	"m_graphDescData":
//	{
//		"Name": "",
//		"m_nGraphOutputChannels": -1,
//		"m_bIsMainGraph": false
//	},
//	"m_editorNodes":
//	[
//	],
//	"m_editorEdges":
//	[
//	],
//	"m_nPreviewNode": 0
//}
class CVMixToolGraph
{
	CVMixGraphDescData m_graphDescData;
	CUtlVector< CVMixEditorNode > m_editorNodes;
	CUtlVector< CVMixEditorEdge > m_editorEdges;
	int32 m_nPreviewNode;
};
