/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSBundleODRDataForApplications : _NSBundleODRDataCommon {
    NSMutableSet * _extensionConnections;
    NSObject<OS_dispatch_group> * _initialStateGroup;
    NSString * _rootSandboxPath;
    NSDictionary * _tagToTagState;
}

+ (id)dataForBundle:(id)arg1 createIfRequired:(bool)arg2;

- (void)_waitForDaemon;
- (void)addExtensionEndpoint:(id)arg1;
- (void)assetPacksBecameAvailable:(id)arg1;
- (void)assetPacksBecameUnavailable:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithBundle:(id)arg1;
- (double)preservationPriorityForTag:(id)arg1;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;

@end
