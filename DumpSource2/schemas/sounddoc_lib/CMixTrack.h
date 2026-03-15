// MGetKV3ClassDefaults = {
//	"_class": "CMixTrack",
//	"m_name": "",
//	"m_Comment": "",
//	"m_bActive": true,
//	"m_bSolo": false,
//	"m_bEditProperties": false,
//	"m_nChannels": -1,
//	"m_nMixDownRule": 0,
//	"m_sendOperator": "SendVoiceWithNamedSend",
//	"m_Send1": "",
//	"m_Send2": "",
//	"m_Send3": "",
//	"m_Send4": ""
//}
// MPropertyFriendlyName = "VMix Track Node"
// MPropertyDescription = "This node creates a track.Voices can be played on a track.  This is the source of audio for your graph."
class CMixTrack : public CMixPropertyBase
{
	// MPropertyDescription = "Leave this as "Automatic" unless you are forcing mono/stereo for some reason.  That way each graph will get configured to match the incoming vsnd (for a voice graph) or the audio device (main mix graph)"
	// MPropertyAttributeChoiceName = "channel_count"
	int32 m_nChannels;
	// MPropertyDescription = "This determines what happens when your incoming audio doesn't match the channel count for the track.  e.g. for a mono track, this is the rule for what happens to stereo audio"
	// MPropertyFriendlyName = "Mix Down Rule"
	// MPropertyAttributeChoiceName = "mix_down_rule"
	int32 m_nMixDownRule;
	// MPropertyFriendlyName = "Send These Voices"
	// MPropertyAttributeChoiceName = "send_operator"
	// MPropertyDescription = "<b>Main Graph Only</b><br>This refers to a piece of code in the sound engine that will select specific voices to be mixed into this track and at what mix level each voice will be mixed.<br>If you want to drive that with data, choose "By Named Send" and author a list of send names for this track.  Then any sound event can send to one of those names and the audio will be mixed here."
	// MPropertyGroupName = "MainGraph"
	CUtlString m_sendOperator;
	// MPropertyGroupName = "MainGraph"
	// MPropertyFriendlyName = "Send Name 1"
	CUtlString m_Send1;
	// MPropertyGroupName = "MainGraph"
	// MPropertyFriendlyName = "Send Name 2"
	CUtlString m_Send2;
	// MPropertyGroupName = "MainGraph"
	// MPropertyFriendlyName = "Send Name 3"
	CUtlString m_Send3;
	// MPropertyGroupName = "MainGraph"
	// MPropertyFriendlyName = "Send Name 4"
	CUtlString m_Send4;
};
