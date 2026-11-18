class CDOTA_Modifier_BlackDragon_Fireball_Dive : public CDOTA_Buff
{
	VectorWS m_vCenter;
	VectorWS m_vLastFireball;
	VectorWS m_vLastFireballSpawn;
	bool m_bHasDroppedFireball;
	float32 m_flYaw;
	float32 m_flCurrentTime;
	float32 dive_length;
	float32 dive_width;
	float32 dive_duration;
	float32 fireball_spacing;
	float32 fireball_forward_offset;
};
