/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROPendingBrailleModifierPair : NSObject {
    NSArray * _modifiers;
    NSString * _pendingBraille;
}

@property (nonatomic, readonly) NSArray *modifiers;
@property (nonatomic, readonly) NSString *pendingBraille;

- (void).cxx_destruct;
- (id)initWithPendingBraille:(id)arg1 modifiers:(id)arg2;
- (id)modifiers;
- (id)pendingBraille;

@end
