#include "fastrtps_dll.h"
#include "fastrtps/rtps/common/Types.h"

#include <string>
#include <vector>

#if defined(_WIN32) && !defined(STL_STRING_EXPORT_APPLY)

#define STL_STRING_EXPORT(dllexport) \
    template class dllexport std::allocator<char>; \
    template class dllexport std::basic_string<char, std::char_traits<char>, std::allocator<char> >;
   
#define STL_STRING_EXPORT_APPLY 1

#else

#ifdef STL_STRING_EXPORT
#undef STL_STRING_EXPORT
#endif

#define STL_STRING_EXPORT(dllexport)

#endif //_WIN32

STL_STRING_EXPORT(RTPS_DllAPI)




#if !defined(_EPRO_STLVECTOR_OCTET_EXPORT_ ) && defined(_WIN32)
#define _EPRO_STLVECTOR_OCTET_EXPORT_

template class RTPS_DllAPI std::allocator<eprosima::fastrtps::rtps::octet>;
template class RTPS_DllAPI std::vector<eprosima::fastrtps::rtps::octet>;

#endif //_EPRO_STLVECTOR_OCTET_EXPORT_

#if !defined(_EPRO_STLVECTOR_STRING_EXPORT_ ) && defined(_WIN32)
#define _EPRO_STLVECTOR_STRING_EXPORT_

template class RTPS_DllAPI std::allocator<std::string>;
template class RTPS_DllAPI std::vector<std::string>;

#endif //_EPRO_STLVECTOR_STRING_EXPORT_

#if !defined(_EPRO_STLVECTOR_PROPERTIES_EXPORT_ ) && defined(_WIN32)
#define _EPRO_STLVECTOR_PROPERTIES_EXPORT_

template class RTPS_DllAPI std::allocator<std::pair<std::string,std::string>>;
template class RTPS_DllAPI std::vector<std::pair<std::string,std::string>>;

#endif //_EPRO_STLVECTOR_STRING_EXPORT_




//template struct FASTRPC_DllAPI std::less<const char*>;
//template class FASTRPC_DllAPI std::allocator<std::pair<const char* const, eprosima::rpc::transport::dds::ProxyProcedureEndpoint*>>;
//template class FASTRPC_DllAPI std::allocator<std::_Tree_nod<std::_Tmap_traits<const char *,eprosima::rpc::transport::dds::ProxyProcedureEndpoint *,std::less<const char *>,std::allocator<std::pair<const char *const ,eprosima::rpc::transport::dds::ProxyProcedureEndpoint *>>,false>>::_Node>;
//template class FASTRPC_DllAPI std::map<const char*, eprosima::rpc::transport::dds::ProxyProcedureEndpoint*>;

