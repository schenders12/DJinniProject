// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#pragma once

#include "EO_APILib.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class EOAPILib final : ::djinni::JniInterface<::eo_api::EOAPILib, EOAPILib> {
public:
    using CppType = std::shared_ptr<::eo_api::EOAPILib>;
    using CppOptType = std::shared_ptr<::eo_api::EOAPILib>;
    using JniType = jobject;

    using Boxed = EOAPILib;

    ~EOAPILib();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<EOAPILib>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<EOAPILib>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    EOAPILib();
    friend ::djinni::JniClass<EOAPILib>;
    friend ::djinni::JniInterface<::eo_api::EOAPILib, EOAPILib>;

};

}  // namespace djinni_generated
