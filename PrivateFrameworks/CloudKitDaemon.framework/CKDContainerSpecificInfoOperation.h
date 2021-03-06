/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerSpecificInfoOperation : CKDOperation {
    CKDContainerInfo * _containerInfo;
    NSObject<OS_dispatch_group> * _infoFetchedGroup;
    bool  _requireUserIDs;
}

@property (nonatomic, copy) CKDContainerInfo *containerInfo;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *infoFetchedGroup;
@property (nonatomic) bool requireUserIDs;

- (void).cxx_destruct;
- (id)activityCreate;
- (bool)canBeUsedForOperation:(id)arg1;
- (id)containerInfo;
- (id)infoFetchedGroup;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)requireUserIDs;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContainerInfo:(id)arg1;
- (void)setRequireUserIDs:(bool)arg1;
- (bool)shouldCheckAppVersion;

@end
