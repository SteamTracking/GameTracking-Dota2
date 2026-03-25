// MGetKV3ClassDefaults = {
//	"_class": "AI_MotorGroundAnimgraph_DebugSnapshotData_t",
//	"state": "",
//	"b_has_path": false,
//	"f_remaining_ground_path_length": -1.000000,
//	"f_current_speed": -1.000000,
//	"move_type": "",
//	"f_move_heading_actual": -1.000000,
//	"f_move_heading_desired": -1.000000,
//	"f_current_lean": 0.000000,
//	"f_target_lean": 0.000000,
//	"vec_events":
//	[
//	]
//}
class AI_MotorGroundAnimgraph_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	CGlobalSymbol state;
	bool b_has_path;
	float32 f_remaining_ground_path_length;
	float32 f_current_speed;
	CGlobalSymbol move_type;
	float32 f_move_heading_actual;
	float32 f_move_heading_desired;
	float32 f_current_lean;
	float32 f_target_lean;
	CUtlVector< AI_MotorGroundAnimgraph_DebugSnapshotData_t::Event_t > vec_events;
};
