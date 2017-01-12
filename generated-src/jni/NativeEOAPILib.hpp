// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#pragma once

#include "EO_APILib.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeEOAPILib final : ::djinni::JniInterface<::helloworld::EOAPILib, NativeEOAPILib> {
public:
    using CppType = std::shared_ptr<::helloworld::EOAPILib>;
    using CppOptType = std::shared_ptr<::helloworld::EOAPILib>;
    using JniType = jobject;

    using Boxed = NativeEOAPILib;

    ~NativeEOAPILib();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeEOAPILib>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeEOAPILib>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeEOAPILib();
    friend ::djinni::JniClass<NativeEOAPILib>;
    friend ::djinni::JniInterface<::helloworld::EOAPILib, NativeEOAPILib>;

};

}  // namespace djinni_generated