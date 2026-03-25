// MGetKV3ClassDefaults = {
//	"_class": "AI_DefaultNPC_DebugSnapshotData_t",
//	"s_npc_current_ability": "",
//	"s_npc_tactic_current": "",
//	"s_npc_tactic_phase": "",
//	"tactic_interrupt_conditions":
//	[
//	],
//	"s_npc_current_movement": "",
//	"path_query_schedule":
//	{
//		"m_sInitialQueryName": "",
//		"m_sCurrentQueryName": "",
//		"m_nMode": "",
//		"m_nType": "",
//		"m_nState": ""
//	},
//	"path_query_tactic":
//	{
//		"m_sInitialQueryName": "",
//		"m_sCurrentQueryName": "",
//		"m_nMode": "",
//		"m_nType": "",
//		"m_nState": ""
//	},
//	"path_queries_speculative":
//	[
//	]
//}
class AI_DefaultNPC_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	CGlobalSymbol s_npc_current_ability;
	CGlobalSymbol s_npc_tactic_current;
	CGlobalSymbol s_npc_tactic_phase;
	CUtlVector< CGlobalSymbol > tactic_interrupt_conditions;
	CUtlString s_npc_current_movement;
	AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t path_query_schedule;
	AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t path_query_tactic;
	CUtlVector< AI_DefaultNPC_DebugSnapshotData_t::PathQuery_t > path_queries_speculative;
};
