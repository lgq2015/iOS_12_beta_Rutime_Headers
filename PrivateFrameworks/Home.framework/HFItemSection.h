/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItemSection : NSObject <HFDiffableItemGroup, NAIdentifiable, NSCopying, NSMutableCopying> {
    NSAttributedString * _attributedFooterTitle;
    NSString * _footerTitle;
    NSString * _headerTitle;
    NSString * _identifier;
    NSArray * _items;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSAttributedString *attributedFooterTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *diffableItems;
@property (nonatomic, copy) NSString *footerTitle;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *items;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id /* block */)defaultItemComparator;
+ (id)filterSections:(id)arg1 toDisplayedItems:(id)arg2;
+ (id)na_identity;

- (void).cxx_destruct;
- (id)_createCopyMutable:(bool)arg1;
- (id)attributedFooterTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diffableItems;
- (id)footerTitle;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)headerTitle;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAttributedFooterTitle:(id)arg1;
- (void)setFooterTitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end