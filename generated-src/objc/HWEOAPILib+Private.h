// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#include "EO_APILib.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class HWEOAPILib;

namespace djinni_generated {

class EOAPILib
{
public:
    using CppType = std::shared_ptr<::helloworld::EOAPILib>;
    using CppOptType = std::shared_ptr<::helloworld::EOAPILib>;
    using ObjcType = HWEOAPILib*;

    using Boxed = EOAPILib;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
