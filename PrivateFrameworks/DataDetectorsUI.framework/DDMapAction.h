/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDMapAction : DDRemoteAction {
    NSString * _addressString;
    NSURL * _commitURL;
}

+ (bool)actionAvailableForContact:(id)arg1;
+ (bool)handlesUrl:(id)arg1 result:(struct __DDResult { }*)arg2;
+ (id)viewControllerProviderClass;

- (void).cxx_destruct;
- (id)commitURL;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (id)platterTitle;
- (id)previewActions;

@end
