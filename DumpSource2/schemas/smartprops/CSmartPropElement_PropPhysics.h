// MGetKV3ClassDefaults = {
//	"_class": "CSmartPropElement_PropPhysics",
//	"m_nElementID": -1,
//	"m_bEnabled": true,
//	"m_sLabel": "",
//	"m_SelectionCriteria":
//	[
//	],
//	"m_Modifiers":
//	[
//	],
//	"m_sModelName": "",
//	"m_MaterialGroupName": "",
//	"m_bCastShadows": true,
//	"m_bForceStatic": false,
//	"m_nDeformableAttachmentMode": "RELATIVE",
//	"m_nDeformableOrientationMode": "MAINTAIN_OFFSET",
//	"m_bStartAsleep": false
//}
// MPropertyFriendlyName = "Prop Physics"
// MPropertyDescription = "Places a prop physics entity."
class CSmartPropElement_PropPhysics : public CSmartPropElement_ModelEntity
{
	// MPropertyDescription = "Should this physics prop start in a sleeping (non-simulating) state such that it won't update until it is woken up by an external event."
	CSmartPropAttributeBool m_bStartAsleep;
};
