// MGetKV3ClassDefaults = {
//	"m_Name": "",
//	"m_OverrideToolShortcutName": "",
//	"m_FriendlyName": "",
//	"m_ToolIcon": "",
//	"m_Executable": "",
//	"m_Args": "",
//	"m_ArgsWithLineColumn": "",
//	"m_WorkingDir": "",
//	"m_MatchSystemExecutable": "",
//	"m_SupportedExts":
//	[
//	],
//	"m_PriorityExts":
//	[
//	],
//	"m_bDebugCommandline": false
//}
class CExternalToolInfo : public CBaseToolInfo
{
	CUtlString m_Executable;
	CUtlString m_Args;
	CUtlString m_ArgsWithLineColumn;
	CUtlString m_WorkingDir;
	CUtlString m_MatchSystemExecutable;
	CUtlVector< CUtlString > m_SupportedExts;
	CUtlVector< CUtlString > m_PriorityExts;
	bool m_bDebugCommandline;
};
