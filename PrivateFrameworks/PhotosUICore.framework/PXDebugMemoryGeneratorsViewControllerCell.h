/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugMemoryGeneratorsViewControllerCell : UITableViewCell {
    PHMemory * _memory;
}

@property (retain) PHMemory *memory;

- (void).cxx_destruct;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)memory;
- (void)persist:(id)arg1;
- (void)setMemory:(id)arg1;

@end