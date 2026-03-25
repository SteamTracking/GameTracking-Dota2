class CDOTA_Modifier_Juggernaut_Vaulted_Strike_Slashes : public CDOTA_Buff
{
	float32 start_offset_distance;
	float32 slash_start_radius;
	float32 slash_end_radius;
	float32 slash_projectile_speed;
	float32 end_distance;
	int32 m_nCurrentSlashes;
	int32 max_slashes;
};
