
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileXfer.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#include "xcdr/xcdr_interpreter.h"
#include "xcdr/xcdr_stream.h"

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "dds_c/dds_c_typecode_impl.h"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "FileXferPlugin.h"

/* ----------------------------------------------------------------------------
*  Type file_xfer
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

file_xfer*
file_xferPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params) 
{
    file_xfer *sample = NULL;

    sample = new (std::nothrow) file_xfer ;
    if (sample == NULL) {
        return NULL;
    }

    if (!file_xfer_initialize_w_params(sample,alloc_params)) {
        delete  sample;
        sample=NULL;
    }
    return sample;
} 

file_xfer *
file_xferPluginSupport_create_data_ex(RTIBool allocate_pointers) 
{
    file_xfer *sample = NULL;

    sample = new (std::nothrow) file_xfer ;

    if(sample == NULL) {
        return NULL;
    }

    if (!file_xfer_initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
        delete  sample;
        sample=NULL;
    }

    return sample;
}

file_xfer *
file_xferPluginSupport_create_data(void)
{
    return file_xferPluginSupport_create_data_ex(RTI_TRUE);
}

void 
file_xferPluginSupport_destroy_data_w_params(
    file_xfer *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params) {
    file_xfer_finalize_w_params(sample,dealloc_params);

    delete  sample;
    sample=NULL;
}

void 
file_xferPluginSupport_destroy_data_ex(
    file_xfer *sample,RTIBool deallocate_pointers) {
    file_xfer_finalize_ex(sample,deallocate_pointers);

    delete  sample;
    sample=NULL;
}

void 
file_xferPluginSupport_destroy_data(
    file_xfer *sample) {

    file_xferPluginSupport_destroy_data_ex(sample,RTI_TRUE);

}

RTIBool 
file_xferPluginSupport_copy_data(
    file_xfer *dst,
    const file_xfer *src)
{
    return file_xfer_copy(dst,(const file_xfer*) src);
}

void 
file_xferPluginSupport_print_data(
    const file_xfer *sample,
    const char *desc,
    unsigned int indent_level)
{

    RTICdrType_printIndent(indent_level);

    if (desc != NULL) {
        RTILog_debug("%s:\n", desc);
    } else {
        RTILog_debug("\n");
    }

    if (sample == NULL) {
        RTILog_debug("NULL\n");
        return;
    }

    if (sample->filename==NULL) {
        RTICdrType_printString(
            NULL,"filename", indent_level + 1);
    } else {
        RTICdrType_printString(
            sample->filename,"filename", indent_level + 1);    
    }

    RTICdrType_printLong(
        &sample->total_bytes, "total_bytes", indent_level + 1);    

    RTICdrType_printLong(
        &sample->remaining_bytes, "remaining_bytes", indent_level + 1);    

    if (DDS_OctetSeq_get_contiguous_bufferI(&sample->chunk) != NULL) {
        RTICdrType_printArray(
            DDS_OctetSeq_get_contiguous_bufferI(&sample->chunk),
            DDS_OctetSeq_get_length(&sample->chunk),
            RTI_CDR_OCTET_SIZE,
            (RTICdrTypePrintFunction)RTICdrType_printOctet,
            "chunk", indent_level + 1);
    } else {
        RTICdrType_printPointerArray(
            DDS_OctetSeq_get_discontiguous_bufferI(&sample->chunk),
            DDS_OctetSeq_get_length(&sample->chunk ),
            (RTICdrTypePrintFunction)RTICdrType_printOctet,
            "chunk", indent_level + 1);
    }

}

file_xfer *
file_xferPluginSupport_create_key_ex(RTIBool allocate_pointers){
    file_xfer *key = NULL;

    key = new (std::nothrow) file_xferKeyHolder ;

    file_xfer_initialize_ex(key,allocate_pointers, RTI_TRUE);

    return key;
}

file_xfer *
file_xferPluginSupport_create_key(void)
{
    return  file_xferPluginSupport_create_key_ex(RTI_TRUE);
}

void 
file_xferPluginSupport_destroy_key_ex(
    file_xferKeyHolder *key,RTIBool deallocate_pointers)
{
    file_xfer_finalize_ex(key,deallocate_pointers);

    delete  key;
    key=NULL;
}

void 
file_xferPluginSupport_destroy_key(
    file_xferKeyHolder *key) {

    file_xferPluginSupport_destroy_key_ex(key,RTI_TRUE);

}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
file_xferPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    struct RTIXCdrInterpreterPrograms *programs = NULL;
    struct PRESTypePluginDefaultParticipantData *pd = NULL;
    struct RTIXCdrInterpreterProgramsGenProperty programProperty =
    RTIXCdrInterpreterProgramsGenProperty_INITIALIZER;

    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */

    pd = (struct PRESTypePluginDefaultParticipantData *)
    PRESTypePluginDefaultParticipantData_new(participant_info);

    programProperty.generateV1Encapsulation = RTI_XCDR_TRUE;
    programProperty.generateV2Encapsulation = RTI_XCDR_TRUE;
    programProperty.resolveAlias = RTI_XCDR_TRUE;
    programProperty.inlineStruct = RTI_XCDR_TRUE;
    programProperty.optimizeEnum = RTI_XCDR_TRUE;

    programs = DDS_TypeCodeFactory_assert_programs_in_global_list(
        DDS_TypeCodeFactory_get_instance(),
        file_xfer_get_typecode(),
        &programProperty,
        RTI_XCDR_PROGRAM_MASK_TYPEPLUGIN);
    if (programs == NULL) {
        PRESTypePluginDefaultParticipantData_delete(
            (PRESTypePluginParticipantData) pd);
        return NULL;
    }

    pd->programs = programs;
    return (PRESTypePluginParticipantData)pd;
}

void 
file_xferPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{  		
    if (participant_data != NULL) {
        struct PRESTypePluginDefaultParticipantData *pd = 
        (struct PRESTypePluginDefaultParticipantData *)participant_data;

        if (pd->programs != NULL) {
            DDS_TypeCodeFactory_remove_programs_from_global_list(
                DDS_TypeCodeFactory_get_instance(),
                pd->programs);
            pd->programs = NULL;
        }
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
file_xferPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    PRESTypePluginEndpointData epd = NULL;
    unsigned int serializedSampleMaxSize = 0;

    unsigned int serializedKeyMaxSize = 0;
    unsigned int serializedKeyMaxSizeV2 = 0;

    if (top_level_registration) {} /* To avoid warnings */
    if (containerPluginContext) {} /* To avoid warnings */

    if (participant_data == NULL) {
        return NULL;
    } 

    epd = PRESTypePluginDefaultEndpointData_new(
        participant_data,
        endpoint_info,
        (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
        file_xferPluginSupport_create_data,
        (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
        file_xferPluginSupport_destroy_data,
        (PRESTypePluginDefaultEndpointDataCreateKeyFunction)
        file_xferPluginSupport_create_key ,            (PRESTypePluginDefaultEndpointDataDestroyKeyFunction)
        file_xferPluginSupport_destroy_key);

    if (epd == NULL) {
        return NULL;
    } 

    serializedKeyMaxSize =  file_xferPlugin_get_serialized_key_max_size(
        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
    serializedKeyMaxSizeV2 =  file_xferPlugin_get_serialized_key_max_size_for_keyhash(
        epd,
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE,
        0);

    if(!PRESTypePluginDefaultEndpointData_createMD5StreamWithInfo(
        epd,
        endpoint_info,
        serializedKeyMaxSize,
        serializedKeyMaxSizeV2))  
    {
        PRESTypePluginDefaultEndpointData_delete(epd);
        return NULL;
    }

    if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
        serializedSampleMaxSize = file_xferPlugin_get_serialized_sample_max_size(
            epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);
        PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

        if (PRESTypePluginDefaultEndpointData_createWriterPool(
            epd,
            endpoint_info,
            (PRESTypePluginGetSerializedSampleMaxSizeFunction)
            file_xferPlugin_get_serialized_sample_max_size, epd,
            (PRESTypePluginGetSerializedSampleSizeFunction)
            PRESTypePlugin_interpretedGetSerializedSampleSize,
            epd) == RTI_FALSE) {
            PRESTypePluginDefaultEndpointData_delete(epd);
            return NULL;
        }
    }

    return epd;    
}

void 
file_xferPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
file_xferPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    file_xfer *sample,
    void *handle)
{
    file_xfer_finalize_optional_members(sample, RTI_TRUE);

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
file_xferPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    file_xfer *dst,
    const file_xfer *src)
{
    if (endpoint_data) {} /* To avoid warnings */
    return file_xferPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
file_xferPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool
file_xferPlugin_serialize_to_cdr_buffer_ex(
    char *buffer,
    unsigned int *length,
    const file_xfer *sample,
    DDS_DataRepresentationId_t representation)
{
    RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    RTIBool result;
    struct PRESTypePluginDefaultParticipantData pd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePlugin plugin;

    if (length == NULL) {
        return RTI_FALSE;
    }

    RTIOsapiMemory_zero(&epd, sizeof(struct PRESTypePluginDefaultEndpointData));
    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    file_xfer_get_typecode();
    pd.programs = file_xferPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    encapsulationId = DDS_TypeCode_get_native_encapsulation(
        (DDS_TypeCode *) plugin.typeCode,
        representation);    
    if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
        return RTI_FALSE;
    }

    epd._maxSizeSerializedSample =
    file_xferPlugin_get_serialized_sample_max_size(
        (PRESTypePluginEndpointData)&epd, 
        RTI_TRUE, 
        encapsulationId,
        0);

    if (buffer == NULL) {
        *length = 
        PRESTypePlugin_interpretedGetSerializedSampleSize(
            (PRESTypePluginEndpointData)&epd,
            RTI_TRUE,
            encapsulationId,
            0,
            sample);

        if (*length == 0) {
            return RTI_FALSE;
        }

        return RTI_TRUE;
    }    

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, *length);

    result = PRESTypePlugin_interpretedSerialize(
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream,
        RTI_TRUE,
        encapsulationId,
        RTI_TRUE,
        NULL);

    *length = RTICdrStream_getCurrentPositionOffset(&stream);
    return result;
}

RTIBool
file_xferPlugin_serialize_to_cdr_buffer(
    char *buffer,
    unsigned int *length,
    const file_xfer *sample)
{
    return file_xferPlugin_serialize_to_cdr_buffer_ex(
        buffer,
        length,
        sample,
        DDS_AUTO_DATA_REPRESENTATION);
}

RTIBool
file_xferPlugin_deserialize_from_cdr_buffer(
    file_xfer *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;
    struct RTIXCdrTypePluginProgramContext defaultProgramConext =
    RTIXCdrTypePluginProgramContext_INTIALIZER;
    struct PRESTypePluginDefaultParticipantData pd;
    struct PRESTypePlugin plugin;

    epd.programContext = defaultProgramConext;  
    epd._participantData = &pd;
    epd.typePlugin = &plugin;
    epd.programContext.endpointPluginData = &epd;
    plugin.typeCode = (struct RTICdrTypeCode *)
    file_xfer_get_typecode();
    pd.programs = file_xferPlugin_get_programs();
    if (pd.programs == NULL) {
        return RTI_FALSE;
    }

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    file_xfer_finalize_optional_members(sample, RTI_TRUE);
    return PRESTypePlugin_interpretedDeserialize( 
        (PRESTypePluginEndpointData)&epd, sample,
        &stream, RTI_TRUE, RTI_TRUE, 
        NULL);
}

#ifndef NDDS_STANDALONE_TYPE
DDS_ReturnCode_t
file_xferPlugin_data_to_string(
    const file_xfer *sample,
    char *str,
    DDS_UnsignedLong *str_size, 
    const struct DDS_PrintFormatProperty *property)
{
    DDS_DynamicData *data = NULL;
    char *buffer = NULL;
    unsigned int length = 0;
    struct DDS_PrintFormat printFormat;
    DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

    if (sample == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (str_size == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }

    if (property == NULL) {
        return DDS_RETCODE_BAD_PARAMETER;
    }
    if (!file_xferPlugin_serialize_to_cdr_buffer(
        NULL, 
        &length, 
        sample)) {
        return DDS_RETCODE_ERROR;
    }

    RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
    if (buffer == NULL) {
        return DDS_RETCODE_ERROR;
    }

    if (!file_xferPlugin_serialize_to_cdr_buffer(
        buffer, 
        &length, 
        sample)) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }
    data = DDS_DynamicData_new(
        file_xfer_get_typecode(), 
        &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
    if (data == NULL) {
        RTIOsapiHeap_freeBuffer(buffer);
        return DDS_RETCODE_ERROR;
    }

    retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_PrintFormatProperty_to_print_format(
        property, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    retCode = DDS_DynamicDataFormatter_to_string_w_format(
        data, 
        str,
        str_size, 
        &printFormat);
    if (retCode != DDS_RETCODE_OK) {
        RTIOsapiHeap_freeBuffer(buffer);
        DDS_DynamicData_delete(data);
        return retCode;
    }

    RTIOsapiHeap_freeBuffer(buffer);
    DDS_DynamicData_delete(data);
    return DDS_RETCODE_OK;
}
#endif

unsigned int 
file_xferPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = PRESTypePlugin_interpretedGetSerializedSampleMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
file_xferPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_USER_KEY;
}

RTIBool file_xferPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    file_xfer **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    RTIBool result;
    if (drop_sample) {} /* To avoid warnings */
    stream->_xTypesState.unassignable = RTI_FALSE;
    result= PRESTypePlugin_interpretedDeserializeKey(
        endpoint_data, (sample != NULL)?*sample:NULL, stream,
        deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
    if (result) {
        if (stream->_xTypesState.unassignable) {
            result = RTI_FALSE;
        }
    }
    return result;    

}

unsigned int
file_xferPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSize(
        endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

unsigned int
file_xferPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;
    size = PRESTypePlugin_interpretedGetSerializedKeyMaxSizeForKeyhash(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);
    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
file_xferPlugin_instance_to_key(
    PRESTypePluginEndpointData endpoint_data,
    file_xferKeyHolder *dst, 
    const file_xfer *src)
{
    if (endpoint_data) {} /* To avoid warnings */   

    if (!RTICdrType_copyStringEx (
        &dst->filename, src->filename, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
file_xferPlugin_key_to_instance(
    PRESTypePluginEndpointData endpoint_data,
    file_xfer *dst, const
    file_xferKeyHolder *src)
{
    if (endpoint_data) {} /* To avoid warnings */   
    if (!RTICdrType_copyStringEx (
        &dst->filename, src->filename, 
        (255) + 1, RTI_FALSE)){
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

RTIBool 
file_xferPlugin_instance_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    DDS_KeyHash_t *keyhash,
    const file_xfer *instance,
    RTIEncapsulationId encapsulationId)
{
    struct RTICdrStream * md5Stream = NULL;
    struct RTICdrStreamState cdrState;
    char * buffer = NULL;
    RTIXCdrBoolean iCdrv2;

    iCdrv2 = RTIXCdrEncapsulationId_isCdrV2(encapsulationId);
    RTICdrStreamState_init(&cdrState);
    md5Stream = PRESTypePluginDefaultEndpointData_getMD5Stream(endpoint_data);

    if (md5Stream == NULL) {
        return RTI_FALSE;
    }

    RTICdrStream_resetPosition(md5Stream);
    RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);

    if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
        endpoint_data,
        instance,
        md5Stream,
        iCdrv2?
        RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
        RTI_CDR_ENCAPSULATION_ID_CDR_BE,
        NULL)) 
    {
        int size;

        RTICdrStream_pushState(md5Stream, &cdrState, -1);

        size = (int)PRESTypePlugin_interpretedGetSerializedSampleSize(
            endpoint_data,
            RTI_FALSE,
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            0,
            instance);

        if (size <= RTICdrStream_getBufferLength(md5Stream)) {
            RTICdrStream_popState(md5Stream, &cdrState);        
            return RTI_FALSE;
        }   

        RTIOsapiHeap_allocateBuffer(&buffer,size,0);

        if (buffer == NULL) {
            RTICdrStream_popState(md5Stream, &cdrState);
            return RTI_FALSE;
        }

        RTICdrStream_set(md5Stream, buffer, size);
        RTIOsapiMemory_zero(
            RTICdrStream_getBuffer(md5Stream),
            RTICdrStream_getBufferLength(md5Stream));
        RTICdrStream_resetPosition(md5Stream);
        RTICdrStream_setDirtyBit(md5Stream, RTI_TRUE);
        if (!PRESTypePlugin_interpretedSerializeKeyForKeyhash(
            endpoint_data,
            instance,
            md5Stream, 
            iCdrv2?
            RTI_CDR_ENCAPSULATION_ID_CDR2_BE:
            RTI_CDR_ENCAPSULATION_ID_CDR_BE,
            NULL)) 
        {
            RTICdrStream_popState(md5Stream, &cdrState);
            RTIOsapiHeap_freeBuffer(buffer);
            return RTI_FALSE;
        }        
    }   

    if (PRESTypePluginDefaultEndpointData_getMaxSizeSerializedKey(endpoint_data, iCdrv2) > 
    (unsigned int)(MIG_RTPS_KEY_HASH_MAX_LENGTH) ||
    PRESTypePluginDefaultEndpointData_forceMD5KeyHash(endpoint_data)) {
        RTICdrStream_computeMD5(md5Stream, keyhash->value);
    } else {
        RTIOsapiMemory_zero(keyhash->value,MIG_RTPS_KEY_HASH_MAX_LENGTH);
        RTIOsapiMemory_copy(
            keyhash->value, 
            RTICdrStream_getBuffer(md5Stream), 
            RTICdrStream_getCurrentPositionOffset(md5Stream));
    }

    keyhash->length = MIG_RTPS_KEY_HASH_MAX_LENGTH;

    if (buffer != NULL) {
        RTICdrStream_popState(md5Stream, &cdrState);
        RTIOsapiHeap_freeBuffer(buffer);
    }

    return RTI_TRUE;
}

RTIBool 
file_xferPlugin_serialized_sample_to_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    DDS_KeyHash_t *keyhash,
    RTIBool deserialize_encapsulation,
    void *endpoint_plugin_qos) 
{   
    file_xfer * sample = NULL;
    sample = (file_xfer *)
    PRESTypePluginDefaultEndpointData_getTempSample(endpoint_data);
    if (sample == NULL) {
        return RTI_FALSE;
    }

    if (!PRESTypePlugin_interpretedSerializedSampleToKey(
        endpoint_data,
        sample,
        stream, 
        deserialize_encapsulation, 
        RTI_TRUE,
        endpoint_plugin_qos)) {
        return RTI_FALSE;
    }
    if (!file_xferPlugin_instance_to_keyhash(
        endpoint_data, 
        keyhash, 
        sample,
        RTICdrStream_getEncapsulationKind(stream))) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

struct RTIXCdrInterpreterPrograms *file_xferPlugin_get_programs()
{
    return ::rti::xcdr::get_cdr_serialization_programs<
    file_xfer, 
    true, true, true>();
}

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *file_xferPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);

    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    file_xferPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    file_xferPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    file_xferPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    file_xferPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    file_xferPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    file_xferPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    file_xferPlugin_destroy_sample;
    plugin->finalizeOptionalMembersFnc =
    (PRESTypePluginFinalizeOptionalMembersFunction)
    file_xfer_finalize_optional_members;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) PRESTypePlugin_interpretedSerialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) PRESTypePlugin_interpretedDeserializeWithAlloc;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    file_xferPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleMinSize;
    plugin->getDeserializedSampleMaxSizeFnc = NULL; 
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    file_xferPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    file_xferPlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    file_xferPlugin_get_key_kind;

    plugin->getSerializedKeyMaxSizeFnc =   
    (PRESTypePluginGetSerializedKeyMaxSizeFunction)
    file_xferPlugin_get_serialized_key_max_size;
    plugin->serializeKeyFnc =
    (PRESTypePluginSerializeKeyFunction)
    PRESTypePlugin_interpretedSerializeKey;
    plugin->deserializeKeyFnc =
    (PRESTypePluginDeserializeKeyFunction)
    file_xferPlugin_deserialize_key;
    plugin->deserializeKeySampleFnc =
    (PRESTypePluginDeserializeKeySampleFunction)
    PRESTypePlugin_interpretedDeserializeKey;

    plugin-> instanceToKeyHashFnc = 
    (PRESTypePluginInstanceToKeyHashFunction)
    file_xferPlugin_instance_to_keyhash;
    plugin->serializedSampleToKeyHashFnc = 
    (PRESTypePluginSerializedSampleToKeyHashFunction)
    file_xferPlugin_serialized_sample_to_keyhash;

    plugin->getKeyFnc =
    (PRESTypePluginGetKeyFunction)
    file_xferPlugin_get_key;
    plugin->returnKeyFnc =
    (PRESTypePluginReturnKeyFunction)
    file_xferPlugin_return_key;

    plugin->instanceToKeyFnc =
    (PRESTypePluginInstanceToKeyFunction)
    file_xferPlugin_instance_to_key;
    plugin->keyToInstanceFnc =
    (PRESTypePluginKeyToInstanceFunction)
    file_xferPlugin_key_to_instance;
    plugin->serializedKeyToKeyHashFnc = NULL; /* Not supported yet */
    #ifdef NDDS_STANDALONE_TYPE
    plugin->typeCode = NULL; 
    #else
    plugin->typeCode =  (struct RTICdrTypeCode *)file_xfer_get_typecode();
    #endif
    plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    file_xferPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    file_xferPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;  
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    PRESTypePlugin_interpretedGetSerializedSampleSize;

    plugin->getWriterLoanedSampleFnc = NULL; 
    plugin->returnWriterLoanedSampleFnc = NULL;
    plugin->returnWriterLoanedSampleFromCookieFnc = NULL;
    plugin->validateWriterLoanedSampleFnc = NULL;
    plugin->setWriterLoanedSampleSerializedStateFnc = NULL;

    plugin->endpointTypeName = file_xferTYPENAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
file_xferPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
#undef RTI_CDR_CURRENT_SUBMODULE 
