/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMMessagePartChatItem : IMMessageChatItem <IMVisibleAssociatedMessageHost> {
    long long  _index;
    bool  _isBusiness;
    NSArray * _messageEditChatItems;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _messagePartRange;
    NSAttributedString * _text;
    NSArray * _visibleAssociatedMessageChatItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index;
@property (nonatomic) bool isBusiness;
@property (nonatomic, readonly) NSArray *messageEditChatItems;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } messagePartRange;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSAttributedString *text;
@property (setter=_setVisibleAssociatedMessageChatItems:, nonatomic, retain) NSArray *visibleAssociatedMessageChatItems;

+ (id)_defaultRichLinkWhiteList;
+ (id)_guidForMessage:(id)arg1 url:(id)arg2;
+ (bool)_isWhiteListedURL:(id)arg1;
+ (id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2;
+ (id)_newMessagePartsForMessageItem:(id)arg1;
+ (id)_newMessagePartsForMessageItem:(id)arg1 shouldDisplayLink:(bool)arg2 isBusiness:(bool)arg3 parentChatIsSpam:(bool)arg4 hasKnownParticipants:(bool)arg5;
+ (bool)_testingSupportsURL:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 visibleAssociatedMessageChatItems:(id)arg5;
- (void)_setMessageEditChatItems:(id)arg1;
- (void)_setVisibleAssociatedMessageChatItems:(id)arg1;
- (bool)canDelete;
- (bool)canSendMessageAcknowledgment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)index;
- (bool)isBusiness;
- (id)messageEditChatItems;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messagePartRange;
- (void)setIndex:(long long)arg1;
- (void)setIsBusiness:(bool)arg1;
- (void)setMessagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)text;
- (id)visibleAssociatedMessageChatItems;

@end
