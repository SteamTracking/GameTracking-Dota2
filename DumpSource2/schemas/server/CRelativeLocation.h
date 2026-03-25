// MGetKV3ClassDefaults = {
//	"m_Type": "WORLD_SPACE_POSITION",
//	"m_vRelativeOffset":
//	[
//		340282346638528859811704183484516925440.000000,
//		340282346638528859811704183484516925440.000000,
//		340282346638528859811704183484516925440.000000
//	],
//	"m_vWorldSpacePos": null,
//	"m_hEntity": null
//}
class CRelativeLocation
{
	RelativeLocationType_t m_Type;
	Vector m_vRelativeOffset;
	VectorWS m_vWorldSpacePos;
	CHandle< CBaseEntity > m_hEntity;
};
