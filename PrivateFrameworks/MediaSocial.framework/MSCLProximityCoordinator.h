/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLProximityCoordinator : NSObject {
    NSHashTable * _observers;
    bool  _originalUIDeviceState;
}

+ (id)coordinator;

- (void).cxx_destruct;
- (void)_proximityStateChangeNotification:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
