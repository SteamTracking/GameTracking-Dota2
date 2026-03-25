class CDOTA_Modifier_Windrunner_Tailwind_Counter : public CDOTA_Buff
{
	float32 mostRecentBuffTime;
	float32 initializeTime;
	float32 effectSpeedMax;
	float32 effectSpeedMin;
	float32 currentEffectSpeed;
	Vector particleLingerInfo;
	ParticleIndex_t m_nFXIndex;
};
