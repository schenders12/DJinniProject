// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#pragma once

#include <cstdint>
#include <utility>

namespace eo_api {

/** ---------- Lens Config Message Structure ---------- */
struct LensConfigS final {
    int16_t Analog1;
    /** lens connected to analog video source 1 */
    int16_t Analog2;
    /** lens connected to analog video source 2 */
    int16_t Analog3;
    /**
     * lens connected to analog video source 3
     * (differential input on Model 6005 R2)
     */
    int16_t Analog4;
    /**
     * lens connected to analog video source 4
     * (not available on Model 6005 R2)
     */
    int16_t Digital1;
    /**
     * lens connected to digital video source 1
     * lens connected to digital video source 2
     * (not available on Model 6005 and only
     *  supported on 6007 with daughter card)
     */
    int16_t Digital2;

    LensConfigS(int16_t Analog1_,
                int16_t Analog2_,
                int16_t Analog3_,
                int16_t Analog4_,
                int16_t Digital1_,
                int16_t Digital2_)
    : Analog1(std::move(Analog1_))
    , Analog2(std::move(Analog2_))
    , Analog3(std::move(Analog3_))
    , Analog4(std::move(Analog4_))
    , Digital1(std::move(Digital1_))
    , Digital2(std::move(Digital2_))
    {}
};

}  // namespace eo_api