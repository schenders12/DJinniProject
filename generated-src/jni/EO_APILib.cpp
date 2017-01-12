// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#include "EO_APILib.hpp"  // my header
#include "LensConfig_s.hpp"
#include "LensSerialIRZoom_s.hpp"
#include "LensSerialZoom_s.hpp"
#include "Marshal.hpp"
#include "ZoomToRangeConfig_s.hpp"

namespace djinni_generated {

EOAPILib::EOAPILib() : ::djinni::JniInterface<::eo_api::EOAPILib, EOAPILib>("com/srcinc/eo_api/EOAPILib$CppProxy") {}

EOAPILib::~EOAPILib() = default;


CJNIEXPORT void JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::eo_api::EOAPILib>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_srcinc_eo_1api_EOAPILib_ILens(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::eo_api::EOAPILib::ILens();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1SetSerialZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_zoom)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        ref->SetSerialZoom(::djinni_generated::LensSerialZoomS::toCpp(jniEnv, j_zoom));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jshort JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1QueryAllLensConfig(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jshort j_serialIRType)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        auto r = ref->QueryAllLensConfig(::djinni::I16::toCpp(jniEnv, j_serialIRType));
        return ::djinni::release(::djinni::I16::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1ParseSerialZoomConfigMessage(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jbyte j_data)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        auto r = ref->ParseSerialZoomConfigMessage(::djinni::I8::toCpp(jniEnv, j_data));
        return ::djinni::release(::djinni_generated::LensSerialZoomS::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1SetSerialIRZoom(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_zoom)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        ref->SetSerialIRZoom(::djinni_generated::LensSerialIRZoomS::toCpp(jniEnv, j_zoom));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1ParseSerialIRZoomConfigMessage(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jbyte j_data)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        auto r = ref->ParseSerialIRZoomConfigMessage(::djinni::I8::toCpp(jniEnv, j_data));
        return ::djinni::release(::djinni_generated::LensSerialIRZoomS::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1SetZoomToRange(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_config)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        ref->SetZoomToRange(::djinni_generated::ZoomToRangeConfigS::toCpp(jniEnv, j_config));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1ParseZoomToRangeConfigMessage(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jbyte j_data)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        auto r = ref->ParseZoomToRangeConfigMessage(::djinni::I8::toCpp(jniEnv, j_data));
        return ::djinni::release(::djinni_generated::ZoomToRangeConfigS::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1SetConnectionID(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jshort j_connectionID)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        ref->SetConnectionID(::djinni::I16::toCpp(jniEnv, j_connectionID));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1SetLensConfig(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_config)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        ref->SetLensConfig(::djinni_generated::LensConfigS::toCpp(jniEnv, j_config));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_srcinc_eo_1api_EOAPILib_00024CppProxy_native_1ParseLensConfigMessage(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jbyte j_data)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::eo_api::EOAPILib>(nativeRef);
        auto r = ref->ParseLensConfigMessage(::djinni::I8::toCpp(jniEnv, j_data));
        return ::djinni::release(::djinni_generated::LensConfigS::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated