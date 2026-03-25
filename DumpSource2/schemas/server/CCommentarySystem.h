// MGetKV3ClassDefaults = {
//	"_class": "CCommentarySystem",
//	"m_bCommentaryEnabledMidGame": false,
//	"m_flNextTeleportTime": null,
//	"m_iTeleportStage": 0,
//	"m_bCheatState": false,
//	"m_bIsFirstSpawnGroupToLoad": false,
//	"m_ModifiedConvars":
//	[
//	],
//	"m_hCurrentNode": null,
//	"m_hActiveCommentaryNode": null,
//	"m_hLastCommentaryNode": null,
//	"m_vecNodes":
//	[
//	]
//}
class CCommentarySystem
{
	bool m_bCommentaryEnabledMidGame;
	GameTime_t m_flNextTeleportTime;
	int32 m_iTeleportStage;
	bool m_bCheatState;
	bool m_bIsFirstSpawnGroupToLoad;
	CUtlVector< modifiedconvars_t > m_ModifiedConvars;
	CHandle< CPointCommentaryNode > m_hCurrentNode;
	CHandle< CPointCommentaryNode > m_hActiveCommentaryNode;
	CHandle< CPointCommentaryNode > m_hLastCommentaryNode;
	CUtlVector< CHandle< CPointCommentaryNode > > m_vecNodes;
};
