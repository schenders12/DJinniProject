// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#import <Foundation/Foundation.h>

@interface HWLensSerialIRZoomS : NSObject
- (nonnull instancetype)initWithLensType:(int16_t)LensType
                             VideoSource:(int8_t)VideoSource
                              SerialPort:(int8_t)SerialPort
                                 ZoomCmd:(int8_t)ZoomCmd
                                 ZoomCal:(int8_t)ZoomCal
                                FocusCmd:(int8_t)FocusCmd
                                Polarity:(int8_t)Polarity
                                     AGC:(int8_t)AGC
                                 DayMode:(int8_t)DayMode
                         HighSensitivity:(int8_t)HighSensitivity
                         AutoCalibration:(int8_t)AutoCalibration
                               LensCover:(int8_t)LensCover
                         FlirMenuCommand:(int8_t)FlirMenuCommand
                              ManualGain:(int16_t)ManualGain
                            ManualOffset:(int16_t)ManualOffset
            NonUniformityCorrectionTable:(int16_t)NonUniformityCorrectionTable
                                 ZoomFov:(double)ZoomFov
                                  MinFov:(double)MinFov
                                  MaxFov:(double)MaxFov
                           FocusPosition:(int16_t)FocusPosition;
+ (nonnull instancetype)LensSerialIRZoomSWithLensType:(int16_t)LensType
                                          VideoSource:(int8_t)VideoSource
                                           SerialPort:(int8_t)SerialPort
                                              ZoomCmd:(int8_t)ZoomCmd
                                              ZoomCal:(int8_t)ZoomCal
                                             FocusCmd:(int8_t)FocusCmd
                                             Polarity:(int8_t)Polarity
                                                  AGC:(int8_t)AGC
                                              DayMode:(int8_t)DayMode
                                      HighSensitivity:(int8_t)HighSensitivity
                                      AutoCalibration:(int8_t)AutoCalibration
                                            LensCover:(int8_t)LensCover
                                      FlirMenuCommand:(int8_t)FlirMenuCommand
                                           ManualGain:(int16_t)ManualGain
                                         ManualOffset:(int16_t)ManualOffset
                         NonUniformityCorrectionTable:(int16_t)NonUniformityCorrectionTable
                                              ZoomFov:(double)ZoomFov
                                               MinFov:(double)MinFov
                                               MaxFov:(double)MaxFov
                                        FocusPosition:(int16_t)FocusPosition;

@property (nonatomic, readonly) int16_t LensType;

/** lens type */
@property (nonatomic, readonly) int8_t VideoSource;

/** video source lens is connected to */
@property (nonatomic, readonly) int8_t SerialPort;

/** tracker serial port lens is connected to (3-7, 0-2 are reserved) */
@property (nonatomic, readonly) int8_t ZoomCmd;

/** zoom command (0=none, 1=narrow, 2=wide, 3=go to pos) */
@property (nonatomic, readonly) int8_t ZoomCal;

/** perform zoom scale calibration (1=run now) */
@property (nonatomic, readonly) int8_t FocusCmd;

/** focus command (0=none, 1=near, 2=far, 3=go to pos) */
@property (nonatomic, readonly) int8_t Polarity;

/** image polarity (0=normal/white hot, 1=inverted/black hot) */
@property (nonatomic, readonly) int8_t AGC;

/** automatic gain control (0=disabled, 1=enabled/automatic) */
@property (nonatomic, readonly) int8_t DayMode;

/** day mode enable (0=disabled/night, 1=enabled/day) */
@property (nonatomic, readonly) int8_t HighSensitivity;

/** high sensitivity enable (0=disabled/normal, 1=enabled/high) */
@property (nonatomic, readonly) int8_t AutoCalibration;

/** auto calibration enable (0=disabled, 1=enabled) */
@property (nonatomic, readonly) int8_t LensCover;

/**Lens Cover (0=close, 1=open) */
@property (nonatomic, readonly) int8_t FlirMenuCommand;

@property (nonatomic, readonly) int16_t ManualGain;

/** sensor gain (when AGC is disabled) */
@property (nonatomic, readonly) int16_t ManualOffset;

/** sensor offset (when AGC is disabled) */
@property (nonatomic, readonly) int16_t NonUniformityCorrectionTable;

/** non-uniformity correction table to apply */
@property (nonatomic, readonly) double ZoomFov;

/**
 * zoom field-of-view in degrees
 *   range: 0 to 360.00 (divide by 100 to get value)
 */
@property (nonatomic, readonly) double MinFov;

/**
 * minimum zoom field-of-view of the lens in degrees
 *   range: 0 to 360.00 (divide by 100 to get value)
 */
@property (nonatomic, readonly) double MaxFov;

/**
 * maximum zoom field-of-view of the lens in degrees
 *   range: 0 to 360.00 (divide by 100 to get value)
 * focus position
 */
@property (nonatomic, readonly) int16_t FocusPosition;

@end