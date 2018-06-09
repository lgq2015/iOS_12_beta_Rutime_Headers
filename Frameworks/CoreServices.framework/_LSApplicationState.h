/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    int  _ratingRank;
    unsigned long long  _stateFlags;
}

@property (getter=isAlwaysAvailable, nonatomic, readonly) bool alwaysAvailable;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (getter=isRemovedSystemApp, nonatomic, readonly) bool removedSystemApp;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (void)addStateFlag:(unsigned long long)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isAlwaysAvailable;
- (bool)isBlocked;
- (bool)isInstalled;
- (bool)isPlaceholder;
- (bool)isRemovedSystemApp;
- (bool)isRestricted;
- (bool)isValid;

@end