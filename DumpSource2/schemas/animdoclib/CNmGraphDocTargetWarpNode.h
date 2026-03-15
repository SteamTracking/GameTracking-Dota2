// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocTargetWarpNode",
//	"m_ID": <HIDDEN FOR DIFF>,
//	"m_name": "",
//	"m_floatingComment": "",
//	"m_position":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_pChildGraph": null,
//	"m_pSecondaryGraph": null,
//	"m_inputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Input",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "World Target",
//			"m_type": "Target",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_outputPins":
//	[
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Result",
//			"m_type": "Pose",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		}
//	],
//	"m_bAllowTargetUpdate": false,
//	"m_samplingMode": "WorldSpace",
//	"m_flSamplingPositionErrorThreshold": 2.000000,
//	"m_flMaxTangentLength": 49.000000,
//	"m_flLerpFallbackDistanceThreshold": 4.000000,
//	"m_flTargetUpdateDistanceThresholdDegrees": 4.000000,
//	"m_flTargetUpdateAngleThresholdDegrees": 5.000000
//}
class CNmGraphDocTargetWarpNode : public CNmGraphDocFlowNode
{
	bool m_bAllowTargetUpdate;
	CNmRootMotionData::SamplingMode_t m_samplingMode;
	float32 m_flSamplingPositionErrorThreshold;
	float32 m_flMaxTangentLength;
	float32 m_flLerpFallbackDistanceThreshold;
	float32 m_flTargetUpdateDistanceThresholdDegrees;
	float32 m_flTargetUpdateAngleThresholdDegrees;
};
