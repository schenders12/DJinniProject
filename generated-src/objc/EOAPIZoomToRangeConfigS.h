// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from EO_API.djinni

#import <Foundation/Foundation.h>

@interface EOAPIZoomToRangeConfigS : NSObject
- (nonnull instancetype)initWithVideoSource:(int16_t)VideoSource
                                     Enable:(int16_t)Enable
                    UseSinglePointAlgorithm:(int8_t)UseSinglePointAlgorithm
                                 MinLensFOV:(double)MinLensFOV
                                 MaxLensFOV:(double)MaxLensFOV
                                   MinRange:(int16_t)MinRange
                                   MaxRange:(int16_t)MaxRange;
+ (nonnull instancetype)ZoomToRangeConfigSWithVideoSource:(int16_t)VideoSource
                                                   Enable:(int16_t)Enable
                                  UseSinglePointAlgorithm:(int8_t)UseSinglePointAlgorithm
                                               MinLensFOV:(double)MinLensFOV
                                               MaxLensFOV:(double)MaxLensFOV
                                                 MinRange:(int16_t)MinRange
                                                 MaxRange:(int16_t)MaxRange;

@property (nonatomic, readonly) int16_t VideoSource;

/** video source to configure (which lens is connected to) */
@property (nonatomic, readonly) int16_t Enable;

/** enable zoom-to-range for this video source/lens (1=enable) */
@property (nonatomic, readonly) int8_t UseSinglePointAlgorithm;

/** use a single point algorithm (min range and max fov only) instead of two points */
@property (nonatomic, readonly) double MinLensFOV;

/**
 * maximum lens (zoom) field-of-view in degrees
 *   range: 0 to 360.00 (divide by 100 to get value)
 */
@property (nonatomic, readonly) double MaxLensFOV;

/**
 * minimum lens (zoom) field-of-view in degrees
 *   range: 0 to 360.00 (divide by 100 to get value)
 */
@property (nonatomic, readonly) int16_t MinRange;

/**
 * minimum range in centimeters, least significant word (lsw)
 * and most significant word (msw)
 * which corresponds to the maximum FOV of the lens
 * (divide by 100 to get meters)
 * maximum range in centimeters, least significant word (lsw)
 * and most significant word (msw)
 * which corresponds to the minimum FOV of the lens
 * (divide by 100 to get meters)  
 */
@property (nonatomic, readonly) int16_t MaxRange;

@end
