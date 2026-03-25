class CDOTA_Modifier_Falconers_Glove : public CDOTA_Buff
{
	float32 m_flRotation;
	Vector m_vRotationOrigin;
	float32 orbit_radius;
	float32 orbit_seconds_per_rotation;
	float32 min_move_speed;
	float32 max_move_speed;
};
