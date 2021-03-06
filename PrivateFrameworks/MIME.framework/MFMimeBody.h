/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMimeBody : MFMessageBody <ECMimePart> {
    long long  _encryptedDescendantState;
    unsigned int  _numAlternatives;
    unsigned int  _preferredAlternative;
    MFMimePart * _topLevelPart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEncryptedDescendantPart;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *mimeSubtype;
@property (nonatomic, readonly, copy) NSString *mimeType;
@property (readonly) Class superclass;
@property (nonatomic, retain) MFMimePart *topLevelPart;
@property (nonatomic, readonly) unsigned long long totalTextSize;

+ (id)copyNewMimeBoundary;
+ (id)versionString;

- (id)attachmentURLs;
- (id)attachments;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3 isComplete:(bool*)arg4;
- (void)dealloc;
- (bool)hasEncryptedDescendantPart;
- (id)init;
- (bool)isHTML;
- (bool)isRich;
- (id)mimeSubtype;
- (id)mimeType;
- (long long)numberOfAlternatives;
- (unsigned int)numberOfAttachmentsSigned:(bool*)arg1 encrypted:(bool*)arg2;
- (id)partWithNumber:(id)arg1;
- (long long)preferredAlternative;
- (id)preferredBodyPart;
- (void)setPreferredAlternative:(long long)arg1;
- (void)setTopLevelPart:(id)arg1;
- (id)textHtmlPart;
- (id)topLevelPart;
- (unsigned long long)totalTextSize;

@end
