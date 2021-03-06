/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPBibliographySmartField : TSWPSmartField <TSWPCitationRecordHosting> {
    NSArray * _citationRecords;
    bool  _isLocalizable;
}

@property (nonatomic, copy) NSArray *citationRecords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocalizable;
@property (readonly) Class superclass;

+ (bool)isValidBibliographyField:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsPasteAsSmartField;
- (id)citationRecords;
- (id)citationSmartFields;
- (id)copyWithContext:(id)arg1;
- (bool)isLocalizable;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setCitationRecords:(id)arg1;
- (void)setIsLocalizable:(bool)arg1;
- (int)smartFieldKind;

@end
