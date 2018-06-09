/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPlaybackProgress : NSObject <NSSecureCoding> {
    double  _anchorProgress;
    double  _anchorTimestamp;
    double  _rate;
}

@property (nonatomic, readonly) double anchorProgress;
@property (nonatomic, readonly) double anchorTimestamp;
@property (nonatomic, readonly) double currentProgress;
@property (nonatomic, readonly) double rate;

+ (double)currentTimestamp;
+ (id)playbackProgressWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3;
+ (bool)supportsSecureCoding;

- (double)anchorProgress;
- (double)anchorTimestamp;
- (double)currentProgress;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAnchorProgress:(double)arg1 anchorTimestamp:(double)arg2 rate:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)progressForTimestamp:(double)arg1;
- (double)rate;

@end