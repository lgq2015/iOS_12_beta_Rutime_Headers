/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSOpenURL : NSObject

+ (id)_modifiedURLFromURL:(id)arg1 target:(id)arg2;
+ (bool)_openURL:(id)arg1;
+ (id)_sortedSchemes;
+ (void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3;
+ (long long)schemeIndexForBundle:(id)arg1;
+ (id)schemes;

@end
