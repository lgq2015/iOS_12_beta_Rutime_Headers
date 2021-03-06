/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXPasteboardLocationItem : NSObject {
    NSDictionary * _addressComponents;
    NSString * _bundleIdentifier;
    NSDate * _createdAt;
    NSString * _text;
    bool  _wasConsumedForAppPrediction;
}

@property (nonatomic, copy) NSDictionary *addressComponents;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) bool wasConsumedForAppPrediction;

- (void).cxx_destruct;
- (id)addressComponents;
- (id)bundleIdentifier;
- (id)createdAt;
- (void)setAddressComponents:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setText:(id)arg1;
- (void)setWasConsumedForAppPrediction:(bool)arg1;
- (id)text;
- (bool)wasConsumedForAppPrediction;

@end
