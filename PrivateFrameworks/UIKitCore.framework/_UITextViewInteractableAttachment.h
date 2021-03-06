/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextViewInteractableAttachment : _UITextViewInteractableItem {
    NSTextAttachment * _attachment;
}

@property (nonatomic, retain) NSTextAttachment *attachment;

+ (id)interactableLinkWithAttachment:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (void).cxx_destruct;
- (void)_copyImage;
- (id)_image;
- (void)_saveToCameraRoll;
- (id)actions;
- (bool)allowInteraction:(long long)arg1;
- (id)attachment;
- (id)defaultAction;
- (id)localizedTitle;
- (void)setAttachment:(id)arg1;

@end
