/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWInferenceSingleBufferPoolProvider : NSObject <BWInferencePixelBufferPoolProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)liveOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;
- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg1 format:(id)arg2;

@end
