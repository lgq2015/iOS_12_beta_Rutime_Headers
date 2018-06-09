/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResetTracker : NSObject <NSSecureCoding> {
    NSArray * _resetReasons;
}

@property (nonatomic, readonly) NSDate *earliestReasonDate;
@property (nonatomic, readonly) bool hasReasons;
@property (nonatomic, readonly) NSDate *likelyResetDate;
@property (nonatomic, readonly, copy) NSArray *resetReasons;

+ (void)_registerReasonLocked:(id)arg1;
+ (void)_storeReasonsLocked;
+ (id)currentReasonDescriptions;
+ (id)currentTracker;
+ (void)discardTentativeResetReason:(id)arg1;
+ (void)discardTracker:(id)arg1;
+ (void)initialize;
+ (void)registerLikelyResetReason:(id)arg1;
+ (void)registerLikelyResetReason:(id)arg1 arguments:(char *)arg2;
+ (id)registerTentativeResetReasonIfCrashing:(id)arg1;
+ (bool)shouldIgnoreDefaultsCPLKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)earliestReasonDate;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasReasons;
- (id)initWithCoder:(id)arg1;
- (id)initWithResetReasons:(id)arg1;
- (id)likelyResetDate;
- (id)likelyResetReasonWithImmediateReason:(id)arg1;
- (id)resetReasons;

@end