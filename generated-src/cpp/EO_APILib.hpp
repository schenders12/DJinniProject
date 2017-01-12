// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#pragma once

#include <cstdint>

namespace eo_api {

struct LensConfigS;
struct LensSerialIRZoomS;
struct LensSerialZoomS;
struct ZoomToRangeConfigS;

class EOAPILib {
public:
    virtual ~EOAPILib() {}

    static void ILens();

    virtual void SetSerialZoom(const LensSerialZoomS & zoom) = 0;

    virtual int16_t QueryAllLensConfig(int16_t serialIRType) = 0;

    virtual LensSerialZoomS ParseSerialZoomConfigMessage(int8_t data) = 0;

    virtual void SetSerialIRZoom(const LensSerialIRZoomS & zoom) = 0;

    virtual LensSerialIRZoomS ParseSerialIRZoomConfigMessage(int8_t data) = 0;

    virtual void SetZoomToRange(const ZoomToRangeConfigS & config) = 0;

    virtual ZoomToRangeConfigS ParseZoomToRangeConfigMessage(int8_t data) = 0;

    virtual void SetConnectionID(int16_t connectionID) = 0;

    virtual void SetLensConfig(const LensConfigS & config) = 0;

    virtual LensConfigS ParseLensConfigMessage(int8_t data) = 0;
};

}  // namespace eo_api