/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNTheme : TSATheme <KNSlideCollection, TSKDocumentObject, TSKTransformableObject, TSSPresetSource> {
    NSString * _UUID;
    NSMutableArray * _classicThemeRecords;
    NSMutableDictionary * _customEffectTimingCurves;
    KNSlideNode * _defaultMasterSlideNode;
    bool  _defaultMasterSlideNodeIsOurBestGuess;
    NSObject<OS_dispatch_queue> * _defaultMasterSlideNodeQueue;
    TSUPointerKeyDictionary * _formulaReferenceNamesForSlideNodesCache;
    NSArray * _masters;
    NSMutableDictionary * _slideNodesForFormulaReferenceNamesCache;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, retain) NSArray *classicThemeRecords;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, copy) NSDictionary *customEffectTimingCurves;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) KNSlideNode *defaultMasterSlideNode;
@property (nonatomic, readonly) bool defaultMasterSlideNodeIsOurBestGuess;
@property (nonatomic, readonly) TSWPParagraphStyle *defaultPresenterNotesParagraphStyle;
@property (nonatomic, readonly) KNSlideNode *defaultSlideNodeForNewSelection;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *masters;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbnailSize;

+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)classicThemeNameFromTheme:(id)arg1;
+ (id)generateUUID;
+ (void)initialize;
+ (id)nativeThemeNameFromTheme:(id)arg1;
+ (id)presetKinds;
+ (void)registerPresetSourceClasses;
+ (id)themeNameForCustomOrUnknownTheme;

- (void).cxx_destruct;
- (id)UUID;
- (void)addClassicThemeRecord:(id)arg1;
- (void)addDefaultPresenterNotesStylesIfAbsent;
- (void)addMasterSlideNode:(id)arg1 dolcContext:(id)arg2;
- (void)addMasterSlideNode:(id)arg1 withThumbnails:(id)arg2 dolcContext:(id)arg3;
- (void)bootstrapBlackThemeOfSize:(struct CGSize { double x1; double x2; })arg1;
- (void)bootstrapGradientThemeOfSize:(struct CGSize { double x1; double x2; })arg1;
- (void)bootstrapThemeOfSize:(struct CGSize { double x1; double x2; })arg1 alternate:(int)arg2;
- (void)bootstrapWhiteThemeOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)childEnumerator;
- (id)classicThemeRecords;
- (bool)containsMasterWithName:(id)arg1;
- (bool)containsSlideNode:(id)arg1;
- (double)cornerRadius;
- (id)customEffectTimingCurves;
- (id)customTimingCurveWithName:(id)arg1;
- (bool)customTimingCurvesContainsName:(id)arg1;
- (id)defaultMasterSlideNode;
- (bool)defaultMasterSlideNodeIsOurBestGuess;
- (id)defaultPresenterNotesParagraphStyle;
- (id)defaultSlideNodeForNewSelection;
- (id)defaultSlideNodeForNewSelectionNearestToIndex:(unsigned long long)arg1;
- (id)formulaReferenceNameForSlideNode:(id)arg1;
- (id)i_findDefaultMasterDuringArchiving;
- (unsigned long long)indexOfSlideNode:(id)arg1;
- (id)initWithContext:(id)arg1 documentStylesheet:(id)arg2;
- (void)insertMasterSlideNode:(id)arg1 withThumbnails:(id)arg2 atIndex:(unsigned long long)arg3 dolcContext:(id)arg4;
- (void)invalidateSlideNameCache;
- (void)loadFromArchive:(const struct ThemeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ThemeArchive {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct Reference {} *x9; struct Reference {} *x10; struct RepeatedPtrField<KN::ThemeCustomTimingCurveArchive> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; bool x12; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)mappedMasterForPasteForMaster:(id)arg1;
- (id)mappedMasterForPasteForSlide:(id)arg1;
- (id)mappedMasterForThemeChangeForMaster:(id)arg1;
- (id)masterWithName:(id)arg1;
- (id)masters;
- (id)modelPathComponentForChild:(id)arg1;
- (id)nameForMasterCopyWithName:(id)arg1;
- (id)orderedSlideNodesInSelection:(id)arg1;
- (void)p_cacheSlideNodes;
- (id)p_findDefaultMasterWithoutLoadingSlides;
- (id)p_findSecondMaster;
- (id)p_mappedMasterForMaster:(id)arg1 scoringHeuristic:(id /* block */)arg2;
- (int)p_matchScoreForMaster:(id)arg1 toMaster:(id)arg2;
- (id)p_nameByIncrementingCounterAfterStringToAppend:(id)arg1 forOriginalName:(id)arg2 testForExistingName:(id /* block */)arg3;
- (void)p_selectSecondMasterAsDefault;
- (void)p_setDefaultMasterSlideNode:(id)arg1;
- (void)removeAllClassicThemeRecords;
- (void)removeAllMasters;
- (void)removeCustomTimingCurveWithName:(id)arg1;
- (void)removeMasterSlideNode:(id)arg1;
- (void)resolveDefaultMaster;
- (void)saveToArchive:(struct ThemeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ThemeArchive {} *x5; struct RepeatedPtrField<TSP::Reference> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct RepeatedPtrField<TSP::Reference> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct Reference {} *x9; struct Reference {} *x10; struct RepeatedPtrField<KN::ThemeCustomTimingCurveArchive> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; bool x12; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)selectSecondMasterAsDefault;
- (void)setClassicThemeRecords:(id)arg1;
- (void)setCustomEffectTimingCurves:(id)arg1;
- (void)setCustomTimingCurve:(id)arg1 forName:(id)arg2;
- (void)setDefaultMasterSlideNode:(id)arg1;
- (void)setMasters:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)slideNamesMatchingPrefix:(id)arg1;
- (id)slideNodeForFormulaReferenceName:(id)arg1 caseSensitive:(bool)arg2;
- (id)themeCurvesForBuilds:(id)arg1 slideNodes:(id)arg2;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (id)undeletableStyles;
- (id)updatedThemeCurveInfoForPastedThemeCurves:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end