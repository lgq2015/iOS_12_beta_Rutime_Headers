/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDCallKitAction : DDCallAction {
    TUCallProvider * _callProvider;
}

@property (retain) TUCallProvider *callProvider;

+ (id)callKitProviders;
+ (bool)hostApplicationIsEntitled;

- (void).cxx_destruct;
- (long long)TTYType;
- (id)callProvider;
- (id)localizedName;
- (void)setCallProvider:(id)arg1;

@end