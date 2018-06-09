/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageLoadingContext : NSObject <MFCancelable> {
    <MFScheduler> * _analysisScheduler;
    MFObservable * _analysisSuggestionsObservable;
    MFAttachmentManager * _attachmentManager;
    MFCancelationToken * _cancelable;
    MFObservable * _contentObservable;
    unsigned long long  _contentOffset;
    bool  _draftMessage;
    bool  _editableMessage;
    NSString * _eventICSRepresentation;
    NSString * _eventUniqueID;
    bool  _hasLoadedBestAlternativePart;
    bool  _hasLoadedCompleteMessage;
    bool  _hasLoadedSomeContent;
    MFObservable<MFObserver> * _inputObservable;
    MFMimePart * _loadedPart;
    NSString * _meetingName;
    NSString * _meetingStorePersistentID;
    MFMailMessage * _message;
    MFMimeBody * _messageBody;
    bool  _outgoingMessage;
    bool  _shouldAnalyzeMessage;
    MFObservable * _smimeObservable;
    MFObservable<MFObserver> * _trustReevaluationObservable;
    <MFScheduler> * _trustReevaluationScheduler;
}

@property (setter=_setAttachmentManager:, nonatomic, retain) MFAttachmentManager *attachmentManager;
@property (nonatomic) unsigned long long contentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraftMessage, nonatomic, readonly) bool draftMessage;
@property (getter=isEditableMessage, nonatomic, readonly) bool editableMessage;
@property (nonatomic) bool hasLoadedBestAlternativePart;
@property (nonatomic) bool hasLoadedCompleteMessage;
@property (nonatomic) bool hasLoadedSomeContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MFMimePart *loadedPart;
@property (setter=_setMessage:, nonatomic, retain) MFMailMessage *message;
@property (setter=_setMessageBody:, nonatomic, retain) MFMimeBody *messageBody;
@property (getter=isOutgoingMessage, nonatomic, readonly) bool outgoingMessage;
@property (readonly) Class superclass;

+ (unsigned long long)_nextOffsetForOffset:(unsigned long long)arg1 totalLength:(unsigned long long)arg2 requestedAmount:(unsigned long long)arg3;

- (void)_load:(long long)arg1;
- (id)_reallyLoad:(long long)arg1 shouldDownload:(bool)arg2;
- (void)_setAttachmentManager:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setMessageBody:(id)arg1;
- (void)_setupMeetingData;
- (void)_setupObservableStreams;
- (id)addContentAnalysisObserver:(id /* block */)arg1;
- (id)addLoadObserver:(id /* block */)arg1;
- (id)addSMIMEObserver:(id /* block */)arg1;
- (id)analysisSuggestionsFromHTMLString:(id)arg1 hasLoadedCompleteBody:(bool)arg2;
- (void)assignAttachmentManagerToContent:(id)arg1;
- (id)attachmentManager;
- (void)cancel;
- (id)concatenatedStringFromContent:(id)arg1;
- (unsigned long long)contentOffset;
- (void)dealloc;
- (id)description;
- (bool)hasLoadedBestAlternativePart;
- (bool)hasLoadedCompleteMessage;
- (bool)hasLoadedSomeContent;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2 analyzeMessage:(bool)arg3;
- (bool)isDraftMessage;
- (bool)isEditableMessage;
- (bool)isOutgoingMessage;
- (void)load:(long long)arg1;
- (void)load:(long long)arg1 scheduler:(id)arg2;
- (id)loadedPart;
- (id)message;
- (id)messageBody;
- (id)onScheduler:(id)arg1 addLoadObserver:(id /* block */)arg2;
- (void)processMeetingInvitations:(id)arg1;
- (void)reevaluateSMIMETrustWithNetworkAccessAllowed;
- (void)setContentOffset:(unsigned long long)arg1;
- (void)setHasLoadedBestAlternativePart:(bool)arg1;
- (void)setHasLoadedCompleteMessage:(bool)arg1;
- (void)setHasLoadedSomeContent:(bool)arg1;
- (void)setLoadedPart:(id)arg1;
- (id)suggestionsFromIndexableItem:(id)arg1;
- (id)unsubscribeSuggestions;

@end