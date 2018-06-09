/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem {
    CKMediaObject * _mediaObject;
}

@property (nonatomic, retain) CKMediaObject *mediaObject;
@property (nonatomic, readonly, copy) NSString *transferGUID;

- (void).cxx_destruct;
- (id)IMAssociatedStickerChatItem;
- (Class)cellClass;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (BOOL)transcriptOrientation;
- (id)transferGUID;

@end