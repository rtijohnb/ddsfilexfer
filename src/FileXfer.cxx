

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileXfer.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "FileXfer.h"

#ifndef NDDS_STANDALONE_TYPE
#include "FileXferPlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *file_xferTYPENAME = "file_xfer";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* file_xfer_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode file_xfer_g_tc_filename_string = DDS_INITIALIZE_STRING_TYPECODE((255));
    static DDS_TypeCode file_xfer_g_tc_chunk_sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(((MAX_MSG_LENGTH)),NULL);

    static DDS_TypeCode_Member file_xfer_g_tc_members[4]=
    {

        {
            (char *)"filename",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"total_bytes",/* Member name */
            {
                1,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"remaining_bytes",/* Member name */
            {
                2,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"chunk",/* Member name */
            {
                3,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode file_xfer_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"file_xfer", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            file_xfer_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for file_xfer*/

    if (is_initialized) {
        return &file_xfer_g_tc;
    }

    file_xfer_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    file_xfer_g_tc_chunk_sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet_w_new;
    file_xfer_g_tc_chunk_sequence._data._sampleAccessInfo = &DDS_g_sai_octet_seq;
    file_xfer_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&file_xfer_g_tc_filename_string;
    file_xfer_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
    file_xfer_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
    file_xfer_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& file_xfer_g_tc_chunk_sequence;

    /* Initialize the values for member annotations. */
    file_xfer_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    file_xfer_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    file_xfer_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    file_xfer_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    file_xfer_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    file_xfer_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    file_xfer_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    file_xfer_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    file_xfer_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    file_xfer_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
    file_xfer_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    file_xfer_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    file_xfer_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    file_xfer_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    file_xfer_g_tc._data._sampleAccessInfo =
    file_xfer_get_sample_access_info();
    file_xfer_g_tc._data._typePlugin =
    file_xfer_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &file_xfer_g_tc;
}

#define TSeq file_xferSeq
#define T file_xfer
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *file_xfer_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo file_xfer_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(file_xferSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        file_xferSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &file_xfer_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *file_xfer_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    file_xfer *sample;

    static RTIXCdrMemberAccessInfo file_xfer_g_memberAccessInfos[4] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo file_xfer_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &file_xfer_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        file_xfer);
    if (sample == NULL) {
        return NULL;
    }

    file_xfer_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->filename - (char *)sample);

    file_xfer_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->total_bytes - (char *)sample);

    file_xfer_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->remaining_bytes - (char *)sample);

    file_xfer_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->chunk - (char *)sample);

    file_xfer_g_sampleAccessInfo.memberAccessInfos = 
    file_xfer_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(file_xfer);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            file_xfer_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            file_xfer_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    file_xfer_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    file_xfer_g_sampleAccessInfo.getMemberValuePointerFcn = 
    file_xfer_get_member_value_pointer;

    file_xfer_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &file_xfer_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *file_xfer_get_type_plugin_info()
{
    static RTIXCdrTypePlugin file_xfer_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        file_xfer_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        file_xfer_finalize_w_return,
        NULL
    };

    return &file_xfer_g_typePlugin;
}
#endif

RTIBool file_xfer_initialize(
    file_xfer* sample) {
    return file_xfer_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool file_xfer_initialize_ex(
    file_xfer* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return file_xfer_initialize_w_params(
        sample,&allocParams);

}

RTIBool file_xfer_initialize_w_params(
    file_xfer* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    void* buffer = NULL;
    if (buffer) {} /* To avoid warnings */

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->filename = DDS_String_alloc((255));
        RTICdrType_copyStringEx(
            &sample->filename,
            "",
            (255),
            RTI_FALSE);
        if (sample->filename == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->filename != NULL) {
            RTICdrType_copyStringEx(
                &sample->filename,
                "",
                (255),
                RTI_FALSE);
            if (sample->filename == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->total_bytes = 0;

    sample->remaining_bytes = 0;

    if (allocParams->allocate_memory) {
        if(!DDS_OctetSeq_initialize(&sample->chunk  )){
            return RTI_FALSE;
        }
        if(!DDS_OctetSeq_set_absolute_maximum(&sample->chunk , ((MAX_MSG_LENGTH)))){
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_set_maximum(&sample->chunk , ((MAX_MSG_LENGTH)))) {
            return RTI_FALSE;
        }
    } else { 
        if(!DDS_OctetSeq_set_length(&sample->chunk, 0)){
            return RTI_FALSE;
        }    
    }
    return RTI_TRUE;
}

RTIBool file_xfer_finalize_w_return(
    file_xfer* sample)
{
    file_xfer_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void file_xfer_finalize(
    file_xfer* sample)
{

    file_xfer_finalize_ex(sample,RTI_TRUE);
}

void file_xfer_finalize_ex(
    file_xfer* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    file_xfer_finalize_w_params(
        sample,&deallocParams);
}

void file_xfer_finalize_w_params(
    file_xfer* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->filename != NULL) {
        DDS_String_free(sample->filename);
        sample->filename=NULL;

    }

    if(!DDS_OctetSeq_finalize(&sample->chunk)){
        return;
    }

}

void file_xfer_finalize_optional_members(
    file_xfer* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool file_xfer_copy(
    file_xfer* dst,
    const file_xfer* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &dst->filename, src->filename, 
            (255) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->total_bytes, &src->total_bytes)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->remaining_bytes, &src->remaining_bytes)) { 
            return RTI_FALSE;
        }
        if (!DDS_OctetSeq_copy(&dst->chunk ,
        &src->chunk )) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'file_xfer' sequence class.
*/
#define T file_xfer
#define TSeq file_xferSeq

#define T_initialize_w_params file_xfer_initialize_w_params

#define T_finalize_w_params   file_xfer_finalize_w_params
#define T_copy       file_xfer_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<file_xfer>::get() 
        {
            return (const RTIXCdrTypeCode *) file_xfer_get_typecode();
        }

    } 
}
#endif
