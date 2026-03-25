// MPropertyElementNameFn (UNKNOWN FOR PARSER)
// MGetKV3ClassDefaults = {
//	"m_Name": "Duplicate And Mirror Attachment Options",
//	"m_eMirrorSpace": "MIRROR_SPACE_MODEL_RELATIVE",
//	"m_bSwapLeftRightParentBones": false,
//	"m_bMirrorX": false,
//	"m_bMirrorY": true,
//	"m_bMirrorZ": false
//}
// MPropertyDescription = "Options for duplicating and mirroring attachments."
class DuplicateAndMirrorAttachmentOpts_t
{
	// MPropertyFlattenIntoParentRow
	// MPropertyReadOnly
	CUtlString m_Name;
	// MPropertyFriendlyName = "Mirror Space"
	// MPropertyDescription = "Whether to mirror relative to the parent bone or to the model."
	MirrorSpace_t m_eMirrorSpace;
	// MPropertyFriendlyName = "Swap Left/Right Parent Bones"
	// MPropertyDescription = "Swap parent bones if a bone ends in a known left/right suffix, i.e. _L, _left, etc... and there's a correspondingly named bones.  Works best for bone relative mirroring in Y, i.e. across the XZ plane, left/right."
	bool m_bSwapLeftRightParentBones;
	// MPropertyFriendlyName = "Mirror X Axis / YZ Plane"
	// MPropertyDescription = "Mirror X Axis / Across YZ Plane / Front/Back"
	bool m_bMirrorX;
	// MPropertyFriendlyName = "Mirror Y Axis / XZ Plane"
	// MPropertyDescription = "Mirror Y Axis / Across XZ Plane / Left/Right"
	bool m_bMirrorY;
	// MPropertyFriendlyName = "Mirror Z Axis / XY Plane"
	// MPropertyDescription = "Mirror Z Axis / Across XY Plane / Up/Down"
	bool m_bMirrorZ;
};
