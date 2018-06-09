/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface WebThreadSafeUndoManager : NSUndoManager

- (bool)_alwaysShowEditAlertView;
- (void)redo;
- (void)undo;

@end