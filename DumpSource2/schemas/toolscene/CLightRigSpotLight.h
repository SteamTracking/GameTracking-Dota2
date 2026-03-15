// MGetKV3ClassDefaults = {
//	"m_vPosition":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vDirection":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_vLookAt":
//	[
//		0.000000,
//		0.000000,
//		0.000000
//	],
//	"m_Color":
//	[
//		255,
//		255,
//		255
//	],
//	"m_flAxisScale": 1.000000,
//	"m_flRadius": 10000.000000,
//	"m_flBrightness": 1.000000,
//	"m_flLightSourceRadius": 0.000000,
//	"m_flDistance": 1.500000,
//	"m_bRelativePositioning": false,
//	"m_bParentToCamera": false,
//	"m_flOuterConeAngle": 90.000000,
//	"m_flInnerConeAngle": 45.000000,
//	"m_bCastShadows": false
//}
class CLightRigSpotLight : public CLightRigLight
{
	float32 m_flOuterConeAngle;
	float32 m_flInnerConeAngle;
	bool m_bCastShadows;
};
