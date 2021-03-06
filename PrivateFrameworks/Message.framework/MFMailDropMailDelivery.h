/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery {
    NSArray * _attachments;
    MFMailDropMetadata * _imageArchiveMetadata;
    long long  _mailDropState;
}

@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) MFMailDropMetadata *imageArchiveMetadata;
@property (nonatomic) long long mailDropState;

+ (id)_mailDropZone;

- (id)_attachmentManager;
- (long long)_processAttachments;
- (id)_publishRecord:(id)arg1 database:(id)arg2 attachmentRecords:(id)arg3 images:(id)arg4 allowsCellularAccess:(bool)arg5;
- (void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_uploadAttachmentsViaCloudKit:(id)arg1 zone:(id)arg2 records:(id)arg3 zippedPhotos:(id)arg4 attachmentRecords:(id)arg5 images:(id)arg6;
- (id)attachments;
- (void)dealloc;
- (id)deliverSynchronouslyWithCompletion:(id /* block */)arg1;
- (id)imageArchiveMetadata;
- (long long)mailDropState;
- (id)scaledImages:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setImageArchiveMetadata:(id)arg1;
- (void)setMailDropState:(long long)arg1;
- (bool)updateMessageWithAttachmentsSynchronously;

@end
