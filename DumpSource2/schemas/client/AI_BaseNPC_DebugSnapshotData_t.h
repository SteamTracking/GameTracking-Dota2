// MGetKV3ClassDefaults = {
//	"_class": "AI_BaseNPC_DebugSnapshotData_t",
//	"npc_state": "",
//	"current_enemy": null,
//	"s_current_schedule": "",
//	"s_current_task": "",
//	"s_schedule_interrupt_reason": "",
//	"s_schedule_fail_reason": "",
//	"conditions":
//	[
//	],
//	"anim_events":
//	[
//	],
//	"e_action_body_section": "",
//	"e_movement_body_section": ""
//}
class AI_BaseNPC_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	CGlobalSymbol npc_state;
	CHandle< C_BaseEntity > current_enemy;
	CUtlString s_current_schedule;
	CGlobalSymbol s_current_task;
	CUtlString s_schedule_interrupt_reason;
	CUtlString s_schedule_fail_reason;
	CUtlVector< CGlobalSymbol > conditions;
	CUtlVector< CGlobalSymbol > anim_events;
	CGlobalSymbol e_action_body_section;
	CGlobalSymbol e_movement_body_section;
};
