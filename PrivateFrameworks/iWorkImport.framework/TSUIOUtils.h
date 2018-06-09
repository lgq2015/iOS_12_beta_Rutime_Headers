/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUIOUtils : NSObject

+ (struct CGDataProvider { }*)newCGDataProviderForInputStream:(id)arg1;
+ (struct CGDataProvider { }*)newCGDataProviderForReadChannel:(id)arg1;
+ (void)readAllFromChannel:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end