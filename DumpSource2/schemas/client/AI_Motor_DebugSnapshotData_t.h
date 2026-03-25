// MGetKV3ClassDefaults = {
//	"_class": "AI_Motor_DebugSnapshotData_t",
//	"current_movement_gait_set": "",
//	"current_movement_gait": "",
//	"movement_setting_id": ""
//}
class AI_Motor_DebugSnapshotData_t : public DebugSnapshotBaseStructuredData_t
{
	CGlobalSymbol current_movement_gait_set;
	CGlobalSymbol current_movement_gait;
	CGlobalSymbol movement_setting_id;
};
