/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraStorage : PTPCameraFolder {
    NSMutableArray * _objectInfoArray;
}

- (void)dealloc;
- (id)initWithStorageID:(unsigned int)arg1 device:(id)arg2;
- (id)objectInfoArray;
- (void)prime;
- (void)refreshInfo;

@end
