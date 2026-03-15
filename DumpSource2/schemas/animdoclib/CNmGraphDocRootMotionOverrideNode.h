// MGetKV3ClassDefaults = {
//	"_class": "CNmGraphDocRootMotionOverrideNode",
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
//			"m_name": "Desired Moving Velocity (Character)",
//			"m_type": "Vector",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Desired Facing Direction (Character)",
//			"m_type": "Vector",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Linear Velocity Limit (Optional)",
//			"m_type": "Float",
//			"m_bIsDynamicPin": false,
//			"m_bAllowMultipleOutConnections": false
//		},
//		{
//			"m_ID": <HIDDEN FOR DIFF>,
//			"m_name": "Angular Velocity Limit (Optional)",
//			"m_type": "Float",
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
//			"m_bAllowMultipleOutConnections": true
//		}
//	],
//	"m_flMaxLinearVelocity": -1.000000,
//	"m_flMaxAngularVelocityDegrees": -1.000000,
//	"m_bOverrideMoveDirX": true,
//	"m_bOverrideMoveDirY": true,
//	"m_bOverrideMoveDirZ": true,
//	"m_bAllowPitchForFacing": false,
//	"m_bListenForRootMotionEvents": false
//}
class CNmGraphDocRootMotionOverrideNode : public CNmGraphDocFlowNode
{
	float32 m_flMaxLinearVelocity;
	float32 m_flMaxAngularVelocityDegrees;
	bool m_bOverrideMoveDirX;
	bool m_bOverrideMoveDirY;
	bool m_bOverrideMoveDirZ;
	bool m_bAllowPitchForFacing;
	bool m_bListenForRootMotionEvents;
};
