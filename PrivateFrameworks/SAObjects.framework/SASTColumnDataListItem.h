/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTColumnDataListItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic, retain) <SASTTemplateAction> *action;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *decoratedRows;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUINanoImageResource *imageResource;
@property (nonatomic, copy) NSString *rowLayout;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIDecoratedText *title;

+ (id)columnDataListItem;
+ (id)columnDataListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (id)decoratedRows;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)imageResource;
- (id)rowLayout;
- (void)setAction:(id)arg1;
- (void)setDecoratedRows:(id)arg1;
- (void)setImageResource:(id)arg1;
- (void)setRowLayout:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end