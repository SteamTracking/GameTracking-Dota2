class CDOTA_Ability_Creature_Fire_Breath : public CDOTABaseAbility
{
	int32 speed;
	int32 projectile_count;
	int32 randomize;
	float32 rotation_angle;
	float32 damage;
	float32 radius;
	CountdownTimer ctTimer;
	Vector m_vecStartRot;
	Vector m_vecEndRot;
	ParticleIndex_t m_nParticleFXIndex;
};
