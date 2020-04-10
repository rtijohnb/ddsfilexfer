

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FileXfer.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FileXferPlugin_909477621_h
#define FileXferPlugin_909477621_h

#include "FileXfer.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

extern "C" {

    /* The type used to store keys for instances of type struct
    * AnotherSimple.
    *
    * By default, this type is struct file_xfer
    * itself. However, if for some reason this choice is not practical for your
    * system (e.g. if sizeof(struct file_xfer)
    * is very large), you may redefine this typedef in terms of another type of
    * your choosing. HOWEVER, if you define the KeyHolder type to be something
    * other than struct AnotherSimple, the
    * following restriction applies: the key of struct
    * file_xfer must consist of a
    * single field of your redefined KeyHolder type and that field must be the
    * first field in struct file_xfer.
    */
    typedef  class file_xfer file_xferKeyHolder;

    #define file_xferPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample 

    #define file_xferPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
    #define file_xferPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

    #define file_xferPlugin_get_key PRESTypePluginDefaultEndpointData_getKey 
    #define file_xferPlugin_return_key PRESTypePluginDefaultEndpointData_returnKey

    #define file_xferPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
    #define file_xferPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

    /* --------------------------------------------------------------------------------------
    Support functions:
    * -------------------------------------------------------------------------------------- */

    NDDSUSERDllExport extern file_xfer*
    file_xferPluginSupport_create_data_w_params(
        const struct DDS_TypeAllocationParams_t * alloc_params);

    NDDSUSERDllExport extern file_xfer*
    file_xferPluginSupport_create_data_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern file_xfer*
    file_xferPluginSupport_create_data(void);

    NDDSUSERDllExport extern RTIBool 
    file_xferPluginSupport_copy_data(
        file_xfer *out,
        const file_xfer *in);

    NDDSUSERDllExport extern void 
    file_xferPluginSupport_destroy_data_w_params(
        file_xfer *sample,
        const struct DDS_TypeDeallocationParams_t * dealloc_params);

    NDDSUSERDllExport extern void 
    file_xferPluginSupport_destroy_data_ex(
        file_xfer *sample,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    file_xferPluginSupport_destroy_data(
        file_xfer *sample);

    NDDSUSERDllExport extern void 
    file_xferPluginSupport_print_data(
        const file_xfer *sample,
        const char *desc,
        unsigned int indent);

    NDDSUSERDllExport extern file_xfer*
    file_xferPluginSupport_create_key_ex(RTIBool allocate_pointers);

    NDDSUSERDllExport extern file_xfer*
    file_xferPluginSupport_create_key(void);

    NDDSUSERDllExport extern void 
    file_xferPluginSupport_destroy_key_ex(
        file_xferKeyHolder *key,RTIBool deallocate_pointers);

    NDDSUSERDllExport extern void 
    file_xferPluginSupport_destroy_key(
        file_xferKeyHolder *key);

    /* ----------------------------------------------------------------------------
    Callback functions:
    * ---------------------------------------------------------------------------- */

    NDDSUSERDllExport extern PRESTypePluginParticipantData 
    file_xferPlugin_on_participant_attached(
        void *registration_data, 
        const struct PRESTypePluginParticipantInfo *participant_info,
        RTIBool top_level_registration, 
        void *container_plugin_context,
        RTICdrTypeCode *typeCode);

    NDDSUSERDllExport extern void 
    file_xferPlugin_on_participant_detached(
        PRESTypePluginParticipantData participant_data);

    NDDSUSERDllExport extern PRESTypePluginEndpointData 
    file_xferPlugin_on_endpoint_attached(
        PRESTypePluginParticipantData participant_data,
        const struct PRESTypePluginEndpointInfo *endpoint_info,
        RTIBool top_level_registration, 
        void *container_plugin_context);

    NDDSUSERDllExport extern void 
    file_xferPlugin_on_endpoint_detached(
        PRESTypePluginEndpointData endpoint_data);

    NDDSUSERDllExport extern void    
    file_xferPlugin_return_sample(
        PRESTypePluginEndpointData endpoint_data,
        file_xfer *sample,
        void *handle);    

    NDDSUSERDllExport extern RTIBool 
    file_xferPlugin_copy_sample(
        PRESTypePluginEndpointData endpoint_data,
        file_xfer *out,
        const file_xfer *in);

    /* ----------------------------------------------------------------------------
    (De)Serialize functions:
    * ------------------------------------------------------------------------- */

    NDDSUSERDllExport extern RTIBool
    file_xferPlugin_serialize_to_cdr_buffer(
        char * buffer,
        unsigned int * length,
        const file_xfer *sample); 

    NDDSUSERDllExport extern RTIBool
    file_xferPlugin_serialize_to_cdr_buffer_ex(
        char *buffer,
        unsigned int *length,
        const file_xfer *sample,
        DDS_DataRepresentationId_t representation);

    NDDSUSERDllExport extern RTIBool 
    file_xferPlugin_deserialize(
        PRESTypePluginEndpointData endpoint_data,
        file_xfer **sample, 
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_sample, 
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool
    file_xferPlugin_deserialize_from_cdr_buffer(
        file_xfer *sample,
        const char * buffer,
        unsigned int length);    
    #ifndef NDDS_STANDALONE_TYPE
    NDDSUSERDllExport extern DDS_ReturnCode_t
    file_xferPlugin_data_to_string(
        const file_xfer *sample,
        char *str,
        DDS_UnsignedLong *str_size, 
        const struct DDS_PrintFormatProperty *property);    
    #endif

    NDDSUSERDllExport extern unsigned int 
    file_xferPlugin_get_serialized_sample_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    /* --------------------------------------------------------------------------------------
    Key Management functions:
    * -------------------------------------------------------------------------------------- */
    NDDSUSERDllExport extern PRESTypePluginKeyKind 
    file_xferPlugin_get_key_kind(void);

    NDDSUSERDllExport extern unsigned int 
    file_xferPlugin_get_serialized_key_max_size(
        PRESTypePluginEndpointData endpoint_data,
        RTIBool include_encapsulation,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern unsigned int 
    file_xferPlugin_get_serialized_key_max_size_for_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        RTIEncapsulationId encapsulation_id,
        unsigned int current_alignment);

    NDDSUSERDllExport extern RTIBool 
    file_xferPlugin_deserialize_key(
        PRESTypePluginEndpointData endpoint_data,
        file_xfer ** sample,
        RTIBool * drop_sample,
        struct RTICdrStream *stream,
        RTIBool deserialize_encapsulation,
        RTIBool deserialize_key,
        void *endpoint_plugin_qos);

    NDDSUSERDllExport extern RTIBool 
    file_xferPlugin_instance_to_key(
        PRESTypePluginEndpointData endpoint_data,
        file_xferKeyHolder *key, 
        const file_xfer *instance);

    NDDSUSERDllExport extern RTIBool 
    file_xferPlugin_key_to_instance(
        PRESTypePluginEndpointData endpoint_data,
        file_xfer *instance, 
        const file_xferKeyHolder *key);

    NDDSUSERDllExport extern RTIBool 
    file_xferPlugin_instance_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        DDS_KeyHash_t *keyhash,
        const file_xfer *instance,
        RTIEncapsulationId encapsulationId);

    NDDSUSERDllExport extern RTIBool 
    file_xferPlugin_serialized_sample_to_keyhash(
        PRESTypePluginEndpointData endpoint_data,
        struct RTICdrStream *stream, 
        DDS_KeyHash_t *keyhash,
        RTIBool deserialize_encapsulation,
        void *endpoint_plugin_qos); 

    NDDSUSERDllExport extern
    struct RTIXCdrInterpreterPrograms *file_xferPlugin_get_programs();

    /* Plugin Functions */
    NDDSUSERDllExport extern struct PRESTypePlugin*
    file_xferPlugin_new(void);

    NDDSUSERDllExport extern void
    file_xferPlugin_delete(struct PRESTypePlugin *);

}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* FileXferPlugin_909477621_h */

