// MPropertyFriendlyName = "Base NPC"
// MDebugSnapshotDataSortPriority = 100
// MHasKV3TransferPolymorphicClassname
class AI_BaseNPC_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	CGlobalSymbol npc_state;
	CHandle< C_BaseEntity > current_enemy;
	DebugSnapshotSourceLocation_t s_current_schedule;
	CGlobalSymbol s_current_task;
	CUtlString s_prev_schedule;
	DebugSnapshotSourceLocation_t s_npc_current_movement;
	DebugSnapshotSourceLocation_t s_last_task_end_location;
	CUtlVector< DebugSnapshotSourceLocation_t > conditions;
	CUtlVector< CGlobalSymbol > anim_events;
	AI_BaseNPCAnimGraph_DebugSnapshotData_t animgraph;
	AI_Navigator_DebugSnapshotData_t navigator;
	AI_MotorServices_DebugSnapshotData_t motorServices;
	AI_FacingServices_DebugSnapshotData_t facingServices;
};
