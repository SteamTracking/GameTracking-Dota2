// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_AimCameraNode",
//	"m_sName": "Unnamed",
//	"m_vecPosition":
//	[
//		0.000000,
//		0.000000
//	],
//	"m_nNodeID":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_bDebugThisNode": false,
//	"m_networkMode": "ServerAuthoritative",
//	"m_inputConnection":
//	{
//		"m_nodeID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		},
//		"m_outputID":
//		{
//			"m_id": <HIDDEN FOR DIFF>,
//		}
//	},
//	"m_ikChain": "",
//	"m_cameraJointName": "",
//	"m_pelvisJointName": "",
//	"m_clavicleLeftJointName": "",
//	"m_clavicleRightJointName": "",
//	"m_parameterNamePosition":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_parameterNameOrientation":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_parameterNamePelvisOffset":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_parameterCameraOnly":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_parameterCameraClearanceDistance":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_parameterWeaponDepenetrationDistance":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_parameterWeaponDepenetrationDelta":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_depenetrationJointName": "",
//	"m_propJoints":
//	[
//	]
//}
// MPropertyFriendlyName = "Aim Camera"
class CAnimGraphDoc_AimCameraNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Spine IK Chain"
	// MPropertyAttributeChoiceName = "IKChain"
	CUtlString m_ikChain;
	// MPropertyFriendlyName = "Camera Joint"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_cameraJointName;
	// MPropertyFriendlyName = "Pelvis Joint"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_pelvisJointName;
	// MPropertyFriendlyName = "Clavicle Left Joint"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_clavicleLeftJointName;
	// MPropertyFriendlyName = "Clavicle Right Joint"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_clavicleRightJointName;
	// MPropertyFriendlyName = "Animgraph Position Parameter"
	// MPropertyAttributeChoiceName = "VectorParameter"
	AnimParamID m_parameterNamePosition;
	// MPropertyFriendlyName = "Orientation Parameter"
	// MPropertyAttributeChoiceName = "QuaternionParameter"
	AnimParamID m_parameterNameOrientation;
	// MPropertyFriendlyName = "Pelvis Offset Parameter"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_parameterNamePelvisOffset;
	// MPropertyFriendlyName = "Camera Only Parameter"
	// MPropertyAttributeChoiceName = "BoolParameter"
	AnimParamID m_parameterCameraOnly;
	// MPropertyFriendlyName = "Clearance Distance"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_parameterCameraClearanceDistance;
	// MPropertyFriendlyName = "Weapon De-Penetration Distance"
	// MPropertyAttributeChoiceName = "FloatParameter"
	AnimParamID m_parameterWeaponDepenetrationDistance;
	// MPropertyFriendlyName = "Weapon De-Penetration Delta"
	// MPropertyAttributeChoiceName = "VectorParameter"
	AnimParamID m_parameterWeaponDepenetrationDelta;
	// MPropertyFriendlyName = "Depenetration Joint"
	// MPropertyAttributeChoiceName = "Bone"
	CUtlString m_depenetrationJointName;
	// MPropertyFriendlyName = "Prop Joints"
	// MPropertyDescription = "These joints will maintain their offset relative to the camera joint."
	CUtlVector< CAnimGraphDoc_AimCameraNode_PropJoint > m_propJoints;
};
