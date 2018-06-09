/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISUserNotification : NSObject {
    long long  _allowedRetryCount;
    long long  _currentRetryCount;
    NSDictionary * _dictionary;
    unsigned long long  _optionFlags;
    NSDictionary * _userInfo;
}

@property long long allowedRetryCount;
@property long long currentRetryCount;
@property (readonly) NSDictionary *dictionary;
@property (readonly) unsigned long long optionFlags;
@property (retain) NSDictionary *userInfo;

- (long long)allowedRetryCount;
- (struct __CFUserNotification { }*)copyUserNotification;
- (long long)currentRetryCount;
- (void)dealloc;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)optionFlags;
- (void)setAllowedRetryCount:(long long)arg1;
- (void)setCurrentRetryCount:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end