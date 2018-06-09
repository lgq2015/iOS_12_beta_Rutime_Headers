/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentSlotDescription : NSObject <INIntentSlotDescriptionExport, NSCopying> {
    NSString * _dataPropertyName;
    NSString * _facadePropertyName;
    bool  _isExtended;
    bool  _isPrivate;
    NSString * _name;
    NSArray * _resolveSelectorStrings;
    unsigned long long  _tag;
    long long  _valueStyle;
    long long  _valueType;
}

@property (nonatomic, readonly, copy) NSString *dataPropertyName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) SEL deprecatedResolveSelector;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *facadePropertyName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExtended;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) SEL resolveSelector;
@property (nonatomic, readonly, copy) NSArray *resolveSelectorStrings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tag;
@property (nonatomic, readonly) long long valueStyle;
@property (nonatomic, readonly) long long valueType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataPropertyName;
- (SEL)deprecatedResolveSelector;
- (id)facadePropertyName;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 isExtended:(bool)arg5 isPrivate:(bool)arg6 valueType:(long long)arg7 valueStyle:(long long)arg8 resolveSelectors:(SEL)arg9;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(bool)arg7 isPrivate:(bool)arg8 resolveSelector:(SEL)arg9;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(bool)arg7 isPrivate:(bool)arg8 resolveSelector:(SEL)arg9 deprecatedResolveSelector:(SEL)arg10;
- (id)initWithName:(id)arg1 tag:(unsigned long long)arg2 facadePropertyName:(id)arg3 dataPropertyName:(id)arg4 valueType:(long long)arg5 valueStyle:(long long)arg6 isExtended:(bool)arg7 isPrivate:(bool)arg8 resolveSelectors:(SEL)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isExtended;
- (bool)isPrivate;
- (id)localizeValue:(id)arg1 forLanguage:(id)arg2;
- (id)name;
- (SEL)resolveSelector;
- (id)resolveSelectorStrings;
- (void)setValue:(id)arg1 forSlotComposer:(id)arg2;
- (unsigned long long)tag;
- (id)valueForSlotComposer:(id)arg1;
- (long long)valueStyle;
- (long long)valueType;

@end