// MGetKV3ClassDefaults = {
//	"_class": "CAnimGraphDoc_FollowPathNode",
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
//	"m_flBlendOutTime": 0.300000,
//	"m_bBlockNonPathMovement": false,
//	"m_bStopFeetAtGoal": true,
//	"m_bScaleSpeed": false,
//	"m_flScale": 0.500000,
//	"m_flMinAngle": 0.000000,
//	"m_flMaxAngle": 180.000000,
//	"m_flSpeedScaleBlending": 0.200000,
//	"m_bTurnToFace": true,
//	"m_facingTarget": "MoveHeading",
//	"m_paramName": "",
//	"m_param":
//	{
//		"m_id": <HIDDEN FOR DIFF>,
//	},
//	"m_flTurnToFaceOffset": 0.000000,
//	"m_damping":
//	{
//		"_class": "CAnimInputDamping",
//		"m_speedFunction": "NoDamping",
//		"m_fSpeedScale": 1.000000,
//		"m_fFallingSpeedScale": 1.000000
//	}
//}
// MPropertyFriendlyName = "Follow Path"
class CAnimGraphDoc_FollowPathNode : public CAnimGraphDoc_Node
{
	// MPropertySuppressField
	CAnimGraphDoc_NodeConnection m_inputConnection;
	// MPropertyFriendlyName = "Blend Out Time"
	float32 m_flBlendOutTime;
	// MPropertyFriendlyName = "Block Non-Path Movement"
	bool m_bBlockNonPathMovement;
	// MPropertyFriendlyName = "Stop Feet at Goal"
	bool m_bStopFeetAtGoal;
	// MPropertyFriendlyName = "Enable Speed Scaling"
	// MPropertyGroupName = "Speed Scaling"
	// MPropertyAutoRebuildOnChange
	bool m_bScaleSpeed;
	// MPropertyFriendlyName = "Scale"
	// MPropertyGroupName = "Speed Scaling"
	// MPropertyAttributeRange = "0 1"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flScale;
	// MPropertyFriendlyName = "Min Angle"
	// MPropertyGroupName = "Speed Scaling"
	// MPropertyAttributeRange = "0 180"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMinAngle;
	// MPropertyFriendlyName = "Max Angle"
	// MPropertyGroupName = "Speed Scaling"
	// MPropertyAttributeRange = "0 180"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flMaxAngle;
	// MPropertyFriendlyName = "Blend Time"
	// MPropertyGroupName = "Speed Scaling"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flSpeedScaleBlending;
	// MPropertyFriendlyName = "Enable Turn to Face"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAutoRebuildOnChange
	bool m_bTurnToFace;
	// MPropertyFriendlyName = "Target"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAutoRebuildOnChange
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimValueSource m_facingTarget;
	// MPropertySuppressField
	CUtlString m_paramName;
	// MPropertyFriendlyName = "Parameter"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAttributeChoiceName = "FloatParameter"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	AnimParamID m_param;
	// MPropertyFriendlyName = "Offset"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAttributeRange = "-180 180"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	float32 m_flTurnToFaceOffset;
	// MPropertyFriendlyName = "Damping"
	// MPropertyGroupName = "Turn to Face"
	// MPropertyAttrStateCallback (UNKNOWN FOR PARSER)
	CAnimInputDamping m_damping;
};
