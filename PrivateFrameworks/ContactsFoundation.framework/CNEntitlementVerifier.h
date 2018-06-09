/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNEntitlementVerifier : NSObject

+ (bool)auditToken:(struct { unsigned int x1[8]; })arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3;
+ (bool)currentProcessHasBooleanEntitlement:(id)arg1 error:(id*)arg2;
+ (bool)secTask:(struct __SecTask { }*)arg1 hasBooleanEntitlement:(id)arg2 error:(id*)arg3;

@end