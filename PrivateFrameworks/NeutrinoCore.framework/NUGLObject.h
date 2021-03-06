/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLObject : NSObject {
    unsigned int  _identifier;
    NUGLObjectPool * _objectPool;
}

@property (nonatomic, readonly) bool exists;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, retain) NUGLObjectPool *objectPool;

- (void).cxx_destruct;
- (void)dealloc;
- (void)delete;
- (id)description;
- (void)ensure:(id)arg1;
- (bool)exists;
- (void)generate:(id)arg1;
- (unsigned int)identifier;
- (id)objectPool;
- (void)resetGLObject;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setObjectPool:(id)arg1;

@end
