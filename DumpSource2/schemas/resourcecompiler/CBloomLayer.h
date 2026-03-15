// MGetKV3ClassDefaults = {
//	"_class": "CBloomLayer",
//	"m_name": "Bloom 1",
//	"m_nOpacityPercent": 100,
//	"m_bVisible": true,
//	"m_pLayerMask": null,
//	"m_params":
//	{
//		"m_blendMode": "BLOOM_BLEND_ADD",
//		"m_flBloomStrength": 2.000000,
//		"m_flScreenBloomStrength": 1.000000,
//		"m_flBlurBloomStrength": 1.000000,
//		"m_flBloomThreshold": 0.000000,
//		"m_flBloomThresholdWidth": 1.000000,
//		"m_flSkyboxBloomStrength": 1.000000,
//		"m_flBloomStartValue": 1.000000,
//		"m_flComputeBloomStrength": 0.030000,
//		"m_flComputeBloomThreshold": 1.000000,
//		"m_flComputeBloomRadius": 0.600000,
//		"m_flComputeBloomEffectsScale": 1.000000,
//		"m_flComputeBloomLensDirtStrength": 0.000000,
//		"m_flComputeBloomLensDirtBlackLevel": 0.100000,
//		"m_flBlurWeight":
//		[
//			0.200000,
//			0.200000,
//			0.200000,
//			0.200000,
//			0.200000
//		],
//		"m_vBlurTint":
//		[
//			[
//				1.000000,
//				1.000000,
//				1.000000
//			],
//			[
//				1.000000,
//				1.000000,
//				1.000000
//			],
//			[
//				1.000000,
//				1.000000,
//				1.000000
//			],
//			[
//				1.000000,
//				1.000000,
//				1.000000
//			],
//			[
//				1.000000,
//				1.000000,
//				1.000000
//			]
//		]
//	}
//}
class CBloomLayer : public CColorCorrectionLayer
{
	PostProcessingBloomParameters_t m_params;
};
