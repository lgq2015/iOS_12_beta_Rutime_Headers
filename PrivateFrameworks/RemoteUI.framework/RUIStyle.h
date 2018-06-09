/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIStyle : NSObject {
    UIColor * _backgroundColor;
    UIColor * _buttonRowTextColor;
    UIColor * _detailHeaderLabelTextColor;
    UIColor * _focusedRowTextColor;
    long long  _footerLabelAlignment;
    UIColor * _footerLabelTextColor;
    long long  _footerLinkAlignment;
    long long  _headerLabelAlignment;
    UIColor * _headerLabelTextColor;
    long long  _labelRowTextAlignment;
    UIColor * _labelRowTextColor;
    UIColor * _radioGroupSelectedColor;
    UIColor * _selectPageDetailTextColor;
    long long  _subHeaderLabelAlignment;
    UIColor * _subHeaderLabelTextColor;
    UIColor * _tintColor;
    UIColor * _titleLabelTextColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *buttonRowTextColor;
@property (nonatomic, retain) UIColor *detailHeaderLabelTextColor;
@property (nonatomic, retain) UIColor *focusedRowTextColor;
@property (nonatomic) long long footerLabelAlignment;
@property (nonatomic, retain) UIColor *footerLabelTextColor;
@property (nonatomic) long long footerLinkAlignment;
@property (nonatomic) long long headerLabelAlignment;
@property (nonatomic, retain) UIColor *headerLabelTextColor;
@property (nonatomic) long long labelRowTextAlignment;
@property (nonatomic, retain) UIColor *labelRowTextColor;
@property (nonatomic, readonly) long long navBarActivityIndicatorStyle;
@property (nonatomic, retain) UIColor *radioGroupSelectedColor;
@property (nonatomic, retain) UIColor *selectPageDetailTextColor;
@property (nonatomic) long long subHeaderLabelAlignment;
@property (nonatomic, retain) UIColor *subHeaderLabelTextColor;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) UIColor *titleLabelTextColor;

+ (id)defaultStyle;
+ (id)frontRowStyle;
+ (id)setupAssistantModalStyle;
+ (id)setupAssistantStyle;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)applyToLabel:(id)arg1;
- (void)applyToNavigationController:(id)arg1;
- (void)applyToObjectModel:(id)arg1;
- (id)backgroundColor;
- (id)buttonRowTextColor;
- (id)detailHeaderLabelTextColor;
- (id)focusedRowTextColor;
- (long long)footerLabelAlignment;
- (id)footerLabelTextColor;
- (long long)footerLinkAlignment;
- (long long)headerLabelAlignment;
- (id)headerLabelTextColor;
- (id)init;
- (long long)labelRowTextAlignment;
- (id)labelRowTextColor;
- (long long)navBarActivityIndicatorStyle;
- (id)radioGroupSelectedColor;
- (id)selectPageDetailTextColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonRowTextColor:(id)arg1;
- (void)setDetailHeaderLabelTextColor:(id)arg1;
- (void)setFocusedRowTextColor:(id)arg1;
- (void)setFooterLabelAlignment:(long long)arg1;
- (void)setFooterLabelTextColor:(id)arg1;
- (void)setFooterLinkAlignment:(long long)arg1;
- (void)setHeaderLabelAlignment:(long long)arg1;
- (void)setHeaderLabelTextColor:(id)arg1;
- (void)setLabelRowTextAlignment:(long long)arg1;
- (void)setLabelRowTextColor:(id)arg1;
- (void)setRadioGroupSelectedColor:(id)arg1;
- (void)setSelectPageDetailTextColor:(id)arg1;
- (void)setSubHeaderLabelAlignment:(long long)arg1;
- (void)setSubHeaderLabelTextColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitleLabelTextColor:(id)arg1;
- (long long)subHeaderLabelAlignment;
- (id)subHeaderLabelTextColor;
- (id)tintColor;
- (id)titleLabelTextColor;

@end