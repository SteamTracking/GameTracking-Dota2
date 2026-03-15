// MGetKV3ClassDefaults = {
//	"m_nRigType": "PREVIEW",
//	"m_Suns":
//	[
//	],
//	"m_PointLights":
//	[
//	],
//	"m_SpotLights":
//	[
//	],
//	"m_Background":
//	{
//		"m_bEnabled": false,
//		"m_Color":
//		[
//			0,
//			0,
//			0,
//			0
//		]
//	},
//	"m_Grid":
//	{
//		"m_bEnabled": true,
//		"m_Color":
//		[
//			0,
//			0,
//			0,
//			0
//		]
//	},
//	"m_Exposure":
//	{
//		"m_bEnabled": false,
//		"m_flMinEV": -2.000000,
//		"m_flMaxEV": 2.000000
//	},
//	"m_PostProcessing":
//	{
//		"m_hPostProcessing": ""
//	},
//	"m_Sky":
//	{
//		"m_hSkyMaterial": ""
//	},
//	"m_BackgroundMap":
//	{
//		"m_MapName": "",
//		"m_bRender3DSkybox": true,
//		"m_bParticlesTraceAgainstMap": false
//	}
//}
// MVDataRoot
// MVDataAssociatedFile = "toolscenelightrigs.vdata"
class CToolSceneLightRig
{
	LightRigType_t m_nRigType;
	CUtlVector< CLightRigSunLight > m_Suns;
	CUtlVector< CLightRigPointLight > m_PointLights;
	CUtlVector< CLightRigSpotLight > m_SpotLights;
	CLightRigBackground m_Background;
	CLightRigGrid m_Grid;
	CLightRigExposure m_Exposure;
	CLightRigPostProcessing m_PostProcessing;
	CLightRigSky m_Sky;
	CLightRigVMap m_BackgroundMap;
};
