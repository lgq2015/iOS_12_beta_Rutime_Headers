/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoProviderFactory : NSObject <NUVideoProviderFactory> {
    <NUVideoEventTracker> * _eventTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUVideoEventTracker> *eventTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createVideoProviderWithVideoItem:(id)arg1;
- (id)eventTracker;
- (id)init;
- (id)initWithEventTracker:(id)arg1;

@end