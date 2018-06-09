/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNFoundationError : NSObject

+ (id)errorWithCode:(unsigned long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;
+ (id)errorWithErrno;
+ (id)errorWithErrno:(int)arg1;
+ (id)errorWithErrno:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithErrnoAndUserInfo:(id)arg1;
+ (id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 toError:(id)arg3;
+ (id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 withBlock:(id /* block */)arg3;
+ (bool)ifResultIsNo:(bool)arg1 setOutputError:(id*)arg2 toError:(id)arg3;
+ (bool)ifResultIsNo:(bool)arg1 setOutputError:(id*)arg2 withBlock:(id /* block */)arg3;
+ (bool)isCanceledError:(id)arg1;
+ (bool)isCertificateError:(id)arg1;
+ (bool)isError:(id)arg1 errorWithDomain:(id)arg2 code:(long long)arg3;
+ (bool)isFileNotFoundError:(id)arg1;
+ (bool)isTimeoutError:(id)arg1;
+ (id)timeoutError;
+ (id)userCanceledError;

@end