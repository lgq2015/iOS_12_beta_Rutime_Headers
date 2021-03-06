/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsBusinessInfoHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {
    CKBusinessInfoView * _businessInfoView;
}

@property (nonatomic, retain) CKBusinessInfoView *businessInfoView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)businessInfoView;
- (void)layoutSubviews;
- (void)setBusinessInfoView:(id)arg1;

@end
