/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloInterfaceSelectorInfo : NSObject {
    int  _replyBlockIndex;
    int  _returnAddressIndex;
    SEL  _sel;
    NSMethodSignature * _sig;
}

@property (nonatomic, readonly) int replyBlockIndex;
@property (nonatomic, readonly) int returnAddressIndex;
@property (nonatomic, readonly) SEL sel;
@property (nonatomic, readonly, retain) NSMethodSignature *sig;
@property (nonatomic, readonly, copy) NSString *typeStr;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSelector:(SEL)arg1 andMethodSignature:(id)arg2;
- (int)replyBlockIndex;
- (int)returnAddressIndex;
- (SEL)sel;
- (id)sig;
- (id)typeStr;

@end