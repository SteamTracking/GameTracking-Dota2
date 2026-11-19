// MPropertyFriendlyName = "Ground Root Motion Motor"
// MDebugSnapshotDataSortPriority = 50
// MDebugSnapshotDataStartCollapsed
// MHasKV3TransferPolymorphicClassname
class AI_GroundRootMotionMotor_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	DebugSnapshotMotorSettingsResolveTrace_t desired_movement_gait_set;
	DebugSnapshotMotorSettingsResolveTrace_t desired_movement_gait;
	DebugSnapshotMotorSettingsResolveTrace_t desired_stance;
	DebugSnapshotMotorSettingsResolveTrace_t current_movement_gait_set;
	DebugSnapshotMotorSettingsResolveTrace_t current_movement_gait;
	DebugSnapshotMotorSettingsResolveTrace_t current_stance;
	CGlobalSymbol movement_setting_id;
	DebugSnapshotVDataRef_t current_movement_settings_vdata;
	DebugSnapshotVDataRef_t desired_movement_settings_vdata;
	CGlobalSymbol pending_settings_changes;
	CGlobalSymbol settings_change_transition;
	bool b_goal_completion_allowed; // = true
	CGlobalSymbol state;
	int32 n_state_active_tick_count;
	bool b_has_path;
	float32 f_remaining_ground_path_length; // = -1
	float32 f_current_speed; // = -1
	CGlobalSymbol move_type;
	float32 f_forward_strafing_angle_actual; // = -1
	float32 f_forward_strafing_angle_desired; // = -1
	float32 f_forward_strafing_angle_committed; // = -1
	float32 f_current_lean;
	float32 f_target_lean;
	CUtlVector< AI_GroundRootMotionMotor_DebugSnapshotData_t::Event_t > vec_events;
};
