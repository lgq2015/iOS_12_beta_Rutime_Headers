/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _preferredAddress;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *preferredAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)preferredAddress;
- (void)setDisplayName:(id)arg1;
- (void)setPreferredAddress:(id)arg1;

@end
