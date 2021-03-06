/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorkoutComplicationImageProvider : CLKImageProvider {
    bool  _frozen;
    bool  _paused;
}

@property (getter=isFrozen, nonatomic) bool frozen;
@property (getter=isPaused, nonatomic) bool paused;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFrozen;
- (bool)isPaused;
- (void)setFrozen:(bool)arg1;
- (void)setPaused:(bool)arg1;

@end
