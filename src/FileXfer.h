

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileXfer.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileXfer_909477621_h
#define FileXfer_909477621_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

static const DDS_Short MAX_MSG_LENGTH= 8000;
static const DDS_Char * const file_xfer_topic= "file_xfer";
extern "C" {

    extern const char *file_xferTYPENAME;

}

struct file_xferSeq;
#ifndef NDDS_STANDALONE_TYPE
class file_xferTypeSupport;
class file_xferDataWriter;
class file_xferDataReader;
#endif
class file_xfer 
{
  public:
    typedef struct file_xferSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef file_xferTypeSupport TypeSupport;
    typedef file_xferDataWriter DataWriter;
    typedef file_xferDataReader DataReader;
    #endif

    DDS_Char *   filename ;
    DDS_Long   total_bytes ;
    DDS_Long   remaining_bytes ;
    DDS_OctetSeq  chunk ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode* file_xfer_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *file_xfer_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *file_xfer_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *file_xfer_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(file_xferSeq, file_xfer);

NDDSUSERDllExport
RTIBool file_xfer_initialize(
    file_xfer* self);

NDDSUSERDllExport
RTIBool file_xfer_initialize_ex(
    file_xfer* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool file_xfer_initialize_w_params(
    file_xfer* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool file_xfer_finalize_w_return(
    file_xfer* self);

NDDSUSERDllExport
void file_xfer_finalize(
    file_xfer* self);

NDDSUSERDllExport
void file_xfer_finalize_ex(
    file_xfer* self,RTIBool deletePointers);

NDDSUSERDllExport
void file_xfer_finalize_w_params(
    file_xfer* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void file_xfer_finalize_optional_members(
    file_xfer* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool file_xfer_copy(
    file_xfer* dst,
    const file_xfer* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<file_xfer> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* FileXfer */

