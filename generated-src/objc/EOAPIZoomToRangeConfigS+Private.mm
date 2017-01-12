// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#import "EOAPIZoomToRangeConfigS+Private.h"
#import "DJIMarshal+Private.h"
#include <cassert>

namespace djinni_generated {

auto ZoomToRangeConfigS::toCpp(ObjcType obj) -> CppType
{
    assert(obj);
    return {::djinni::I16::toCpp(obj.VideoSource),
            ::djinni::I16::toCpp(obj.Enable),
            ::djinni::I8::toCpp(obj.UseSinglePointAlgorithm),
            ::djinni::F64::toCpp(obj.MinLensFOV),
            ::djinni::F64::toCpp(obj.MaxLensFOV),
            ::djinni::I16::toCpp(obj.MinRange),
            ::djinni::I16::toCpp(obj.MaxRange)};
}

auto ZoomToRangeConfigS::fromCpp(const CppType& cpp) -> ObjcType
{
    return [[EOAPIZoomToRangeConfigS alloc] initWithVideoSource:(::djinni::I16::fromCpp(cpp.VideoSource))
                                                         Enable:(::djinni::I16::fromCpp(cpp.Enable))
                                        UseSinglePointAlgorithm:(::djinni::I8::fromCpp(cpp.UseSinglePointAlgorithm))
                                                     MinLensFOV:(::djinni::F64::fromCpp(cpp.MinLensFOV))
                                                     MaxLensFOV:(::djinni::F64::fromCpp(cpp.MaxLensFOV))
                                                       MinRange:(::djinni::I16::fromCpp(cpp.MinRange))
                                                       MaxRange:(::djinni::I16::fromCpp(cpp.MaxRange))];
}

}  // namespace djinni_generated