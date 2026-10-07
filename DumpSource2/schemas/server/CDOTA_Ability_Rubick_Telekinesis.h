class CDOTA_Ability_Rubick_Telekinesis : public CDOTABaseAbility
{
	VectorWS m_vStartLocation;
	VectorWS m_vLandLocation;
	GameTime_t m_flStartTime;
	CDOTA_BaseNPC* m_pTarget;
};
