/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
 */

@interface MCMContainer : NSObject {
    long long  _containerClass;
    NSString * _identifier;
    struct container_object { } * _thisContainer;
    unsigned int  _userId;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) long long containerClass;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *info;
@property (getter=isTemporary, nonatomic, readonly) bool temporary;
@property (nonatomic, readonly) struct container_object { }*thisContainer;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)containerWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2 existed:(bool*)arg3 error:(id*)arg4;
+ (id)containerWithIdentifier:(id)arg1 error:(id*)arg2;
+ (id)temporaryContainerWithIdentifier:(id)arg1 existed:(bool*)arg2 error:(id*)arg3;
+ (long long)typeContainerClass;

- (void).cxx_destruct;
- (void)_errorOccurred;
- (long long)containerClass;
- (void)dealloc;
- (id)description;
- (id)destroyContainerWithCompletion:(id /* block */)arg1;
- (unsigned long long)diskUsageWithError:(id*)arg1;
- (struct container_object { }*)getLowLevelContainerObject;
- (unsigned long long)hash;
- (id)identifier;
- (id)info;
- (id)infoValueForKey:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 createIfNecessary:(bool)arg2 existed:(bool*)arg3 temp:(bool)arg4 error:(id*)arg5;
- (id)initWithIdentifier:(id)arg1 userId:(unsigned int)arg2 uuid:(id)arg3 error:(id*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isTemporary;
- (void)markDeleted;
- (bool)recreateDefaultStructureWithError:(id*)arg1;
- (bool)regenerateDirectoryUUIDWithError:(id*)arg1;
- (bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (struct container_object { }*)thisContainer;
- (id)url;
- (id)uuid;

@end