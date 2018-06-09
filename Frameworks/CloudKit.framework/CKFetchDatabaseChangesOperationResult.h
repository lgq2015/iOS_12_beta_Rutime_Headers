/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchDatabaseChangesOperationResult : CKOperationResult <NSSecureCoding> {
    CKServerChangeToken * _serverChangeToken;
    NSNumber * _status;
}

@property (nonatomic, retain) CKServerChangeToken *serverChangeToken;
@property (nonatomic, retain) NSNumber *status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serverChangeToken;
- (void)setServerChangeToken:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end