/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKDocumentRoot : TSPObject <TSKAccessControllerDelegate, TSKModel, TSKSearchTargetProvider> {
    TSKAccessController * _accessController;
    NSObject<TSKSearchReference> * _activeSearchReference;
    TSKAnnotationAuthorStorage * _annotationAuthorStorage;
    TSKChangeNotifier * _changeNotifier;
    TSKDocumentSupport * _documentSupport;
    NSMutableArray * _iCloudTeardownStack;
    NSObject<OS_dispatch_queue> * _iCloudTeardownStackQueue;
    bool  _isBeingLocalized;
    bool  _isFindActive;
    NSLocale * _locale;
    TSKPasteboardController * _pasteboardController;
    NSDictionary * _searchReferencesToHighlight;
    <TSKUndoRedoState> * _undoRedoState;
}

@property (nonatomic, readonly) TSKAccessController *accessController;
@property (nonatomic, retain) NSObject<TSKSearchReference> *activeSearchReference;
@property (nonatomic, retain) TSKAnnotationAuthorStorage *annotationAuthorStorage;
@property (nonatomic, readonly) unsigned long long applicationType;
@property (nonatomic, readonly) TSKChangeNotifier *changeNotifier;
@property (nonatomic, readonly) NSString *creationLanguage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSKDocumentSupport *documentSupport;
@property (getter=isFindActive, nonatomic) bool findActive;
@property (nonatomic, readonly) bool hasICloudConflict;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBeingLocalized;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) TSKPasteboardController *pasteboardController;
@property (nonatomic, retain) NSDictionary *searchReferencesToHighlight;
@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSSTheme *theme;
@property (nonatomic, retain) <TSKUndoRedoState> *undoRedoState;
@property (nonatomic, readonly) UIViewController<TSKDocumentViewController> *viewController;
@property (nonatomic, readonly) unsigned long long writingDirection;

+ (Class)commandControllerClass;

- (id)accessController;
- (id)activeSearchReference;
- (long long)addObserverForICloudTeardownWithBlock:(id /* block */)arg1;
- (id)additionalDocumentPropertiesForWrite;
- (id)annotationAuthorStorage;
- (unsigned long long)applicationType;
- (void)changeDocumentCacheFileProtection:(id)arg1;
- (id)changeNotifier;
- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (void)coalesceChanges:(id)arg1;
- (id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(bool)arg2;
- (id)creationLanguage;
- (id)dataFromDocumentCachePath:(id)arg1;
- (void)dealloc;
- (void)didSaveWithEncryptionChange;
- (bool)documentCacheHasAtMostFileProtection:(id)arg1;
- (void)documentDidLoad;
- (bool)documentDisallowsHighlightsOnStorage:(id)arg1;
- (id)documentFonts;
- (id)documentSupport;
- (void)enumerateStyleClientsUsingBlock:(id /* block */)arg1;
- (bool)hasICloudConflict;
- (bool)hasICloudTeardownObserver;
- (struct __CFLocale { }*)hyphenationLocale;
- (id)initWithContext:(id)arg1;
- (bool)isBeingLocalized;
- (bool)isDirectionRightToLeft;
- (bool)isFindActive;
- (id)locale;
- (void)markAsModifiedIfLocaleIsOutOfDate;
- (id)modelEnumerator;
- (id)modelEnumeratorForObjectsConformingToProtocol:(id)arg1;
- (id)modelEnumeratorForObjectsOfClass:(Class)arg1;
- (id)modelEnumeratorForObjectsPassingTest:(id /* block */)arg1;
- (id)modelEnumeratorForObjectsRespondingToSelector:(SEL)arg1;
- (id)modelEnumeratorWithFlags:(unsigned long long)arg1;
- (struct CGImageSource { }*)newImageSourceForDocumentCachePath:(id)arg1;
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (void)notifyICloudTeardownObservers;
- (id)pasteboardController;
- (void)removeICloudTeardownObserver:(long long)arg1;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
- (id)searchReferencesToHighlight;
- (void)setActiveSearchReference:(id)arg1;
- (void)setAnnotationAuthorStorage:(id)arg1;
- (void)setFindActive:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setPasteboardController:(id)arg1;
- (void)setSearchReferencesToHighlight:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUndoRedoState:(id)arg1;
- (bool)shouldHyphenate;
- (id)stylesheet;
- (id)theme;
- (id)unavailableDocumentFonts;
- (id)undoRedoState;
- (id)uniqueDocumentCachePathForProposedPath:(id)arg1;
- (void)updateForNonCommandChangesWithWriteLock:(id)arg1;
- (bool)useLigatures;
- (id)viewController;
- (void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(id /* block */)arg2;
- (bool)writeData:(id)arg1 atDocumentCachePath:(id)arg2;
- (unsigned long long)writingDirection;

@end