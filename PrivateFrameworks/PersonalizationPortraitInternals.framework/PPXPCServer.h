/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPXPCServer : NSObject

+ (void)_registerConfigListener;
+ (void)_registerConnectionsListener;
+ (void)_registerContactListener;
+ (void)_registerEventListener;
+ (void)_registerNamedEntityReadOnlyListener;
+ (void)_registerNamedEntityReadWriteListener;
+ (void)_registerQuickTypeListener;
+ (void)_registerTopicReadOnlyListener;
+ (void)_registerTopicReadWriteListener;
+ (void)registerXPCListeners;

@end
