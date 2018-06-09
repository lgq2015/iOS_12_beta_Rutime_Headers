/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPreviewMenuItem : NSObject <NSCopying> {
    NSArray * __subitems;
    UIColor * _color;
    id /* block */  _handler;
    UIImage * _image;
    long long  _style;
    NSString * _title;
    NSString * identifier;
}

@property (getter=_subitems, setter=_setSubitems:, nonatomic, copy) NSArray *_subitems;
@property (getter=_color, setter=_setColor:, nonatomic, retain) UIColor *color;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *title;

+ (id)_itemWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(id /* block */)arg4;
+ (id)_itemWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(id /* block */)arg4;
+ (id)itemWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (id)itemWithTitle:(id)arg1 style:(long long)arg2 items:(id)arg3;
+ (id)itemWithViewControllerPreviewAction:(id)arg1;

- (void).cxx_destruct;
- (id)_color;
- (void)_setColor:(id)arg1;
- (void)_setSubitems:(id)arg1;
- (id)_subitems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)handler;
- (id)identifier;
- (id)image;
- (void)setHandler:(id /* block */)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end