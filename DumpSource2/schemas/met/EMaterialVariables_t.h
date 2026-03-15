// MGetKV3ClassDefaults = {
//	"m_bIsLayeredShader": false,
//	"m_Variables":
//	[
//	],
//	"m_Layers":
//	[
//	]
//}
class EMaterialVariables_t
{
	bool m_bIsLayeredShader;
	CUtlVector< EMaterialVariable_t > m_Variables;
	CUtlVector< EMaterialLayer_t > m_Layers;
};
