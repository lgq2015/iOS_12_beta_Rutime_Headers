/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBLazyApplicationInfoProvider : NSObject <FBApplicationInfoProvider> {
    Class  _applicationInfoSubclass;
}

@property (nonatomic) Class applicationInfoSubclass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)applicationInfoForBundleIdentifier:(id)arg1;
- (Class)applicationInfoSubclass;
- (id)init;
- (void)setApplicationInfoSubclass:(Class)arg1;

@end
