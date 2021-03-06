/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSAnimationFenceAssertion : NSObject <BSInvalidatable, BSXPCCoding> {
    unsigned long long  _assertionName;
    unsigned long long  _fenceName;
    int  _invalid;
    BSMachPortSendRight * _preFence;
    bool  _shouldTrace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)newSystemFenceAssertionForTriggerPort:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_initWithFenceName:(unsigned long long)arg1 assertionName:(unsigned long long)arg2 preFence:(id)arg3 shouldTrace:(bool)arg4;
- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (bool)isValid;

@end
