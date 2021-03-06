/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebCache : NSObject

+ (bool)addImageToCache:(struct CGImage { }*)arg1 forURL:(id)arg2;
+ (bool)addImageToCache:(struct CGImage { }*)arg1 forURL:(id)arg2 forFrame:(id)arg3;
+ (void)clearCachedCredentials;
+ (void)empty;
+ (void)emptyInMemoryResources;
+ (struct CGImage { }*)imageForURL:(id)arg1;
+ (void)initialize;
+ (bool)isDisabled;
+ (void)removeImageFromCacheForURL:(id)arg1;
+ (void)removeImageFromCacheForURL:(id)arg1 forFrame:(id)arg2;
+ (void)setDisabled:(bool)arg1;
+ (void)sizeOfDeadResources:(int*)arg1;
+ (id)statistics;

@end
