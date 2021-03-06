// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#import "HWLensSerialIRZoomS.h"


@implementation HWLensSerialIRZoomS

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
                           FocusPosition:(int16_t)FocusPosition
{
    if (self = [super init]) {
        _LensType = LensType;
        _VideoSource = VideoSource;
        _SerialPort = SerialPort;
        _ZoomCmd = ZoomCmd;
        _ZoomCal = ZoomCal;
        _FocusCmd = FocusCmd;
        _Polarity = Polarity;
        _AGC = AGC;
        _DayMode = DayMode;
        _HighSensitivity = HighSensitivity;
        _AutoCalibration = AutoCalibration;
        _LensCover = LensCover;
        _FlirMenuCommand = FlirMenuCommand;
        _ManualGain = ManualGain;
        _ManualOffset = ManualOffset;
        _NonUniformityCorrectionTable = NonUniformityCorrectionTable;
        _ZoomFov = ZoomFov;
        _MinFov = MinFov;
        _MaxFov = MaxFov;
        _FocusPosition = FocusPosition;
    }
    return self;
}

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
                                        FocusPosition:(int16_t)FocusPosition
{
    return [[self alloc] initWithLensType:LensType
                              VideoSource:VideoSource
                               SerialPort:SerialPort
                                  ZoomCmd:ZoomCmd
                                  ZoomCal:ZoomCal
                                 FocusCmd:FocusCmd
                                 Polarity:Polarity
                                      AGC:AGC
                                  DayMode:DayMode
                          HighSensitivity:HighSensitivity
                          AutoCalibration:AutoCalibration
                                LensCover:LensCover
                          FlirMenuCommand:FlirMenuCommand
                               ManualGain:ManualGain
                             ManualOffset:ManualOffset
             NonUniformityCorrectionTable:NonUniformityCorrectionTable
                                  ZoomFov:ZoomFov
                                   MinFov:MinFov
                                   MaxFov:MaxFov
                            FocusPosition:FocusPosition];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p LensType:%@ VideoSource:%@ SerialPort:%@ ZoomCmd:%@ ZoomCal:%@ FocusCmd:%@ Polarity:%@ AGC:%@ DayMode:%@ HighSensitivity:%@ AutoCalibration:%@ LensCover:%@ FlirMenuCommand:%@ ManualGain:%@ ManualOffset:%@ NonUniformityCorrectionTable:%@ ZoomFov:%@ MinFov:%@ MaxFov:%@ FocusPosition:%@>", self.class, (void *)self, @(self.LensType), @(self.VideoSource), @(self.SerialPort), @(self.ZoomCmd), @(self.ZoomCal), @(self.FocusCmd), @(self.Polarity), @(self.AGC), @(self.DayMode), @(self.HighSensitivity), @(self.AutoCalibration), @(self.LensCover), @(self.FlirMenuCommand), @(self.ManualGain), @(self.ManualOffset), @(self.NonUniformityCorrectionTable), @(self.ZoomFov), @(self.MinFov), @(self.MaxFov), @(self.FocusPosition)];
}

@end
