/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSModelObject : NUJSObject {
    NUModel * _model;
}

@property (nonatomic, readonly) NUModel *model;

+ (id)JSValueWithModel:(id)arg1 object:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (void)enumerateProperties:(id /* block */)arg1;
- (bool)hasProperty:(id)arg1;
- (id)initWithModel:(id)arg1 representedObject:(id)arg2 context:(id)arg3;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)model;
- (void)reset;
- (id)toObject;
- (id)valueForProperty:(id)arg1 context:(id)arg2 error:(out id*)arg3;

@end
