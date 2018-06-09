/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXActionSerializationManager : NSObject <SXActionSerializationManager, SXActionSerializer> {
    NSMutableDictionary * _serializers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *serializers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLForAction:(id)arg1;
- (id)init;
- (void)registerSerializer:(id)arg1 actionType:(Class)arg2;
- (id)serializers;

@end