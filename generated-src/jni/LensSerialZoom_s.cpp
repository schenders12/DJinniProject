// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#include "LensSerialZoom_s.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

LensSerialZoomS::LensSerialZoomS() = default;

LensSerialZoomS::~LensSerialZoomS() = default;

auto LensSerialZoomS::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<LensSerialZoomS>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::I16::fromCpp(jniEnv, c.LensType)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.LensID)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.VideoSource)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.SerialPort)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.ZoomCmd)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.FocusCmd)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.IrisCmd)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.IrisAuto)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.ZoomCal)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.UseOldProtocol)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.Enable2X)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.ZoomFov)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.MinFov)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.MaxFov)),
                                                           ::djinni::get(::djinni::I16::fromCpp(jniEnv, c.FocusPosition)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto LensSerialZoomS::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 16);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<LensSerialZoomS>::get();
    return {::djinni::I16::toCpp(jniEnv, jniEnv->GetShortField(j, data.field_LensType)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_LensID)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_VideoSource)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_SerialPort)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_ZoomCmd)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_FocusCmd)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_IrisCmd)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_IrisAuto)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_ZoomCal)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_UseOldProtocol)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_Enable2X)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_ZoomFov)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_MinFov)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_MaxFov)),
            ::djinni::I16::toCpp(jniEnv, jniEnv->GetShortField(j, data.field_FocusPosition))};
}

}  // namespace djinni_generated
