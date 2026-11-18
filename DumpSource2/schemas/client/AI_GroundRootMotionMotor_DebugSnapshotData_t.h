// MPropertyFriendlyName = "Ground Root Motion Motor"
// MDebugSnapshotDataSortPriority (UNKNOWN FOR PARSER)
// MDebugSnapshotDataStartCollapsed
// MHasKV3TransferPolymorphicClassname
class AI_GroundRootMotionMotor_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	DebugSnapshotMotorSettingsResolveTrace_t desired_movement_gait_set; // = { "applied_tick": -1, "not_applied_reason": "", "request_source": "", "requested": "", "requested_speed": -1, "result": "", "result_speed": -1, "result_speed_scale": 1, "steps": [  ] }
	DebugSnapshotMotorSettingsResolveTrace_t desired_movement_gait; // = { "applied_tick": -1, "not_applied_reason": "", "request_source": "", "requested": "", "requested_speed": -1, "result": "", "result_speed": -1, "result_speed_scale": 1, "steps": [  ] }
	DebugSnapshotMotorSettingsResolveTrace_t desired_stance; // = { "applied_tick": -1, "not_applied_reason": "", "request_source": "", "requested": "", "requested_speed": -1, "result": "", "result_speed": -1, "result_speed_scale": 1, "steps": [  ] }
	DebugSnapshotMotorSettingsResolveTrace_t current_movement_gait_set; // = { "applied_tick": -1, "not_applied_reason": "", "request_source": "", "requested": "", "requested_speed": -1, "result": "", "result_speed": -1, "result_speed_scale": 1, "steps": [  ] }
	DebugSnapshotMotorSettingsResolveTrace_t current_movement_gait; // = { "applied_tick": -1, "not_applied_reason": "", "request_source": "", "requested": "", "requested_speed": -1, "result": "", "result_speed": -1, "result_speed_scale": 1, "steps": [  ] }
	DebugSnapshotMotorSettingsResolveTrace_t current_stance; // = { "applied_tick": -1, "not_applied_reason": "", "request_source": "", "requested": "", "requested_speed": -1, "result": "", "result_speed": -1, "result_speed_scale": 1, "steps": [  ] }
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
