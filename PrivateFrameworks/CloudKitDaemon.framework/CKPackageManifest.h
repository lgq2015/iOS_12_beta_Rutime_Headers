/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKPackageManifest : NSObject

+ (id)packageWithContentsOfFile:(id)arg1 error:(id*)arg2;
+ (bool)readContentsOfFile:(id)arg1 intoPackage:(id)arg2 error:(id*)arg3;
+ (bool)writePackage:(id)arg1 toFile:(id)arg2 error:(id*)arg3;

@end
