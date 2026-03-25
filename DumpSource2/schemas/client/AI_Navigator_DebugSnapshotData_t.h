// MGetKV3ClassDefaults = {
//	"_class": "AI_Navigator_DebugSnapshotData_t",
//	"s_npc_nav_authority": "",
//	"s_goal_nav_search_id": "",
//	"s_goal_source_location": "",
//	"goal_actual_pos": null,
//	"goal_base_pos": null,
//	"waypoints":
//	[
//	]
//}
// MDebugSnapshotDataRenderable
// MDebugSnapshotDataRenderByDefault
class AI_Navigator_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	CGlobalSymbol s_npc_nav_authority;
	CGlobalSymbol s_goal_nav_search_id;
	CUtlString s_goal_source_location;
	VectorWS goal_actual_pos;
	VectorWS goal_base_pos;
	CUtlVector< AI_Navigator_DebugSnapshotData_t::Waypoint_t > waypoints;
};
