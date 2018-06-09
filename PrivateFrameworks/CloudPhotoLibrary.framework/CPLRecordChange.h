/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLRecordChange : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _changeType;
    NSDate * _dateDeleted;
    bool  _inExpunged;
    bool  _inTrash;
    bool  _isSparseFullChange;
    NSString * _realIdentifier;
    NSData * _recordChangeData;
    NSDate * _recordModificationDate;
    CPLScopedIdentifier * _resourceCopyFromScopedIdentifier;
    CPLScopedIdentifier * _scopedIdentifier;
    bool  _serverRecordIsCorrupted;
    bool  _shouldFilterDefaultValuesForNewProperties;
    bool  _shouldNotTrustCloudCache;
    NSString * _uploadIdentifier;
}

@property (nonatomic) unsigned long long changeType;
@property (nonatomic, copy) NSDate *dateDeleted;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool inExpunged;
@property (nonatomic) bool inTrash;
@property (nonatomic, copy) NSString *realIdentifier;
@property (nonatomic, copy) NSData *recordChangeData;
@property (nonatomic, copy) NSDate *recordModificationDate;
@property (nonatomic, copy) CPLScopedIdentifier *resourceCopyFromScopedIdentifier;
@property (nonatomic, copy) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic) bool serverRecordIsCorrupted;

+ (id)_descriptionForChangeType:(unsigned long long)arg1 isSparseFullChange:(bool)arg2;
+ (Class)classForStoredClassName:(id)arg1 forCPLArchiver:(id)arg2;
+ (id /* block */)copyPropertyBlockForDirection:(unsigned long long)arg1;
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (bool)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (bool)cplShouldIgnorePropertyForEquality:(id)arg1;
+ (id)descriptionForChangeType:(unsigned long long)arg1;
+ (id)descriptionForDirection:(unsigned long long)arg1;
+ (id /* block */)equalityBlockForDirection:(unsigned long long)arg1;
+ (long long)maxInlineDataSize;
+ (id)newChangeWithIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
+ (id)newChangeWithScopedIdentifier:(id)arg1 changeType:(unsigned long long)arg2;
+ (id)newChangeWithType:(unsigned long long)arg1;
+ (id)newDeleteChangeWithIdentifier:(id)arg1;
+ (id)newDeleteChangeWithScopedIdentifier:(id)arg1;
+ (id)newRecord;
+ (id)newRecordInScopeWithIdentifier:(id)arg1;
+ (id)newRecordWithIdentifier:(id)arg1;
+ (id)newRecordWithScopedIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canLowerQuota;
- (void)_setShouldNotTrustCloudCache:(bool)arg1;
- (void)_setUploadIdentifier:(id)arg1;
- (bool)_shouldNotTrustCloudCache;
- (id)_unscopedIdentifier;
- (id)_uploadIdentifier;
- (id)allRelatedScopedIdentifiers;
- (bool)allResourcesAreAvailable;
- (bool)applyChange:(id)arg1 copyPropertiesToFinalChange:(id)arg2 forChangeType:(unsigned long long)arg3 direction:(unsigned long long)arg4 updatedProperty:(id*)arg5;
- (void)awakeFromStorage;
- (unsigned long long)baseDerivativeResourceType;
- (unsigned long long)baseVideoComplemenentResourceType;
- (unsigned long long)changeType;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (void)clearIdentifiers;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(bool)arg2 fullRecord:(id)arg3 usingClientCache:(id)arg4;
- (id)copyChangeType:(unsigned long long)arg1;
- (void)copyDerivatives:(unsigned long long*)arg1 count:(int)arg2 avoidResourceType:(unsigned long long)arg3 fromRecord:(id)arg4 inResourcePerType:(id)arg5;
- (void)copyDerivativesFromRecordIfPossible:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cplFullDescription;
- (id)dateDeleted;
- (long long)dequeueOrder;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)estimatedRecordSize;
- (unsigned long long)fullChangeTypeForFullRecord;
- (bool)hasChangeType:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (bool)inExpunged;
- (bool)inTrash;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDelete;
- (bool)isEqual:(id)arg1;
- (bool)isFullRecord;
- (bool)isInScopeWithIdentifier:(id)arg1;
- (bool)isResourceTypeAGeneratedDerivative:(unsigned long long)arg1;
- (bool)isSparseFullChange;
- (void)markAsSparseFullChange;
- (id)mergeRecordChangeWithNewRecordChange:(id)arg1 direction:(unsigned long long)arg2;
- (unsigned long long)originalResourceSize;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)proposedCloudScopedIdentifierWithError:(id*)arg1;
- (id)proposedLocalScopedIdentifier;
- (id)realIdentifier;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3;
- (id)realRecordChangeFromRecordChange:(id)arg1 direction:(unsigned long long)arg2 newRecord:(id*)arg3 updatedProperties:(id*)arg4;
- (unsigned long long)realResourceSize;
- (id)realScopedIdentifier;
- (id)recordChangeData;
- (id)recordModificationDate;
- (id)relatedIdentifier;
- (id)relatedScopedIdentifier;
- (bool)resourceChangeWillOnlyChangeDerivatives:(id)arg1;
- (id)resourceCopyFromScopedIdentifier;
- (id)resourceForType:(unsigned long long)arg1;
- (id)resourcePerType;
- (id)resources;
- (id)resourcesDescription;
- (id)scopedIdentifier;
- (id)scopedIdentifierForQuarantine;
- (id)scopedIdentifiersForMapping;
- (id)scopedIdentifiersForQuarantine;
- (id)secondaryIdentifier;
- (id)secondaryScopedIdentifier;
- (bool)serverRecordIsCorrupted;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setDateDeleted:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInExpunged:(bool)arg1;
- (void)setInTrash:(bool)arg1;
- (void)setRealIdentifier:(id)arg1;
- (void)setRecordChangeData:(id)arg1;
- (void)setRecordModificationDate:(id)arg1;
- (void)setRelatedIdentifier:(id)arg1;
- (void)setResourceCopyFromScopedIdentifier:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setScopeIndex:(long long)arg1;
- (void)setScopedIdentifier:(id)arg1;
- (void)setSecondaryIdentifier:(id)arg1;
- (void)setServerRecordIsCorrupted:(bool)arg1;
- (void)setShouldFilterDefaultValuesForNewProperties:(bool)arg1;
- (bool)shouldApplyPropertiesWithSelector:(SEL)arg1;
- (bool)shouldFilterDefaultValuesForNewProperties;
- (id)storedClassNameForCPLArchiver:(id)arg1;
- (bool)supportsDeletion;
- (bool)supportsDirectDeletion;
- (bool)supportsResources;
- (unsigned long long)totalResourceSize;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2;
- (bool)validateChangeWithError:(id*)arg1;
- (bool)validateFullRecord;
- (bool)validateRecordForTracker:(id)arg1;

@end