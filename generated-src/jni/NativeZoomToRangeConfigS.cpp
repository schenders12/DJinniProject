// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#include "NativeZoomToRangeConfigS.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeZoomToRangeConfigS::NativeZoomToRangeConfigS() = default;

NativeZoomToRangeConfigS::~NativeZoomToRangeConfigS() = default;

auto NativeZoomToRangeConfigS::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeZoomToRangeConfigS>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I16::fromCpp(jniEnv, c.VideoSource)),
                                                           ::djinni::get(::djinni::I16::fromCpp(jniEnv, c.Enable)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.UseSinglePointAlgorithm)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.MinLensFOV)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.MaxLensFOV)),
                                                           ::djinni::get(::djinni::I16::fromCpp(jniEnv, c.MinRange)),
                                                           ::djinni::get(::djinni::I16::fromCpp(jniEnv, c.MaxRange)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeZoomToRangeConfigS::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 8);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeZoomToRangeConfigS>::get();
    return {::djinni::I16::toCpp(jniEnv, jniEnv->GetShortField(j, data.field_mVideoSource)),
            ::djinni::I16::toCpp(jniEnv, jniEnv->GetShortField(j, data.field_mEnable)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_mUseSinglePointAlgorithm)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_mMinLensFOV)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_mMaxLensFOV)),
            ::djinni::I16::toCpp(jniEnv, jniEnv->GetShortField(j, data.field_mMinRange)),
            ::djinni::I16::toCpp(jniEnv, jniEnv->GetShortField(j, data.field_mMaxRange))};
}

}  // namespace djinni_generated
