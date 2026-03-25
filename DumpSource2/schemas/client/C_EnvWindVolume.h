// MEntityAllowsPortraitWorldSpawn
class C_EnvWindVolume : public C_BaseEntity
{
	bool m_bActive;
	Vector m_vBoxMins;
	Vector m_vBoxMaxs;
	bool m_bStartDisabled;
	int32 m_nShape;
	float32 m_fWindSpeedMultiplier;
	float32 m_fWindTurbulenceMultiplier;
	float32 m_fWindSpeedVariationMultiplier;
	float32 m_fWindDirectionVariationMultiplier;
};
