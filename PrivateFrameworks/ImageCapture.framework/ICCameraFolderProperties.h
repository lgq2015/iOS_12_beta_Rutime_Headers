/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFolderProperties : NSObject {
    NSMutableArray * _files;
    NSMutableArray * _folders;
}

@property (retain) NSMutableArray *files;
@property (retain) NSMutableArray *folders;

- (void)dealloc;
- (id)files;
- (id)folders;
- (void)setFiles:(id)arg1;
- (void)setFolders:(id)arg1;

@end
