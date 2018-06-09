/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailTwoValueCell : EKEventDetailCell {
    int  _style;
    UILabel * _titleView;
    int  _twoValueCellStyle;
    UILabel * _value2View;
    UILabel * _valueView;
}

@property (nonatomic, readonly) unsigned int visibleItems;

- (void).cxx_destruct;
- (double)_layoutForWidth:(double)arg1;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2 platformStyle:(int)arg3;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (void)layoutSubviews;
- (id)titleView;
- (int)twoValueCellStyle;
- (bool)update;
- (id)value2View;
- (id)valueView;
- (unsigned int)visibleItems;

@end