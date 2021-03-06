/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableStyleCollection : NSObject {
    NSString * _defaultTableStyleId;
    NSMutableDictionary * _styleMap;
    NSMutableArray * _styles;
}

@property (nonatomic, copy) NSString *defaultTableStyleId;

- (void)addTableStyle:(id)arg1;
- (void)dealloc;
- (id)defaultTableStyleId;
- (id)init;
- (void)setDefaultTableStyleId:(id)arg1;
- (id)tableStyleWithId:(id)arg1;
- (id)tableStyles;

@end
