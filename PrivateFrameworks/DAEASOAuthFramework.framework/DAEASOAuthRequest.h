/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
 */

@interface DAEASOAuthRequest : NSObject

+ (id)authCodeFromURLRequest:(id)arg1;
+ (id)requestForURL:(id)arg1;
+ (id)urlForOAuthURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 scope:(id)arg4 username:(id)arg5 resource:(id)arg6;
+ (bool)urlPageWillContainAuthorizationCode:(id)arg1;

@end
