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
//	"m_flShadowCascadeDistance0": 0.000000,
//	"m_flShadowCascadeDistance1": 0.000000,
//	"m_flShadowCascadeDistance2": 0.000000,
//	"m_flShadowCascadeDistance3": 0.000000,
//	"m_bCastShadows": false
//}
class CLightRigSunLight : public CLightRigLight
{
	float32 m_flShadowCascadeDistance0;
	float32 m_flShadowCascadeDistance1;
	float32 m_flShadowCascadeDistance2;
	float32 m_flShadowCascadeDistance3;
	bool m_bCastShadows;
};
