class C_DOTA_Ability_Largo_AmphibianRhapsody : public C_DOTABaseAbility
{
	float32 duration;
	float32 rhythm_grace_period;
	float32 movement_burst_duration;
	float32 slow_resistance_burst_duration;
	float32 radius;
	float32 heal_burst;
	int32 max_stacks;
	bool m_bFirstSongPlayed;
	float32 m_flSongStartTime;
	int32 m_nBurstEffect;
	int32 m_nFailEffect;
	CUtlVector< char* > m_vecClientSideOriginalAbilities;
	int32 m_nInvalidOrders;
	int32 m_nSelectedUnitChanged;
};
