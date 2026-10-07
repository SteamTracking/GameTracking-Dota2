class CDOTA_Ability_FacelessVoid_TimeWalk_Reverse : public CDOTABaseAbility, public CHorizontalMotionController
{
	int32 speed;
	int32 m_nProjectileID;
	VectorWS m_vProjectileLocation;
	VectorWS m_vStartLocation;
};
