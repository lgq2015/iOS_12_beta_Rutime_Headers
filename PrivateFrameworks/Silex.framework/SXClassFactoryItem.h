/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXClassFactoryItem : NSObject {
    Class  _baseClass;
    Class  _itemClass;
    NSString * _typeString;
}

@property (nonatomic) Class baseClass;
@property (nonatomic) Class itemClass;
@property (nonatomic, retain) NSString *typeString;

- (void).cxx_destruct;
- (Class)baseClass;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (Class)itemClass;
- (void)setBaseClass:(Class)arg1;
- (void)setItemClass:(Class)arg1;
- (void)setTypeString:(id)arg1;
- (id)typeString;

@end
