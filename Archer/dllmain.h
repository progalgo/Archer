// dllmain.h : Declaration of module class.

class CArcherModule : public ATL::CAtlDllModuleT< CArcherModule >
{
public :
	DECLARE_LIBID(LIBID_ArcherLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ARCHER, "{3c3860bf-1147-439b-9a08-cf528fbad9ad}")
};

extern class CArcherModule _AtlModule;
