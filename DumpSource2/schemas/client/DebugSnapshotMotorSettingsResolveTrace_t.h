// MDebugSnapshotDataSummaryFn
class DebugSnapshotMotorSettingsResolveTrace_t
{
	CGlobalSymbol requested;
	CGlobalSymbol request_source;
	float32 requested_speed; // = -1
	CUtlVector< DebugSnapshotMotorSettingsResolveTrace_t::Step_t > steps;
	CGlobalSymbol result;
	float32 result_speed; // = -1
	float32 result_speed_scale; // = 1
	CGlobalSymbol not_applied_reason;
	int32 applied_tick; // = -1
};
