/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNArchivedSlideCollectionSelection : TSPObject <TSKArchivedSelection> {
    KNSlideCollectionSelection * _selection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TSKSelection *selection;
@property (nonatomic, readonly) KNSlideCollectionSelection *slideCollectionSelection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;
- (id)slideCollectionSelection;

@end
