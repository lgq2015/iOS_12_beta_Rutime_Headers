/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSectionInfo : NSObject {
    NSArray * _items;
    NSPredicate * _predicate;
    long long  _section;
    NSArray * _sortDescriptors;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) long long section;
@property (nonatomic, retain) NSArray *sortDescriptors;
@property (nonatomic, retain) NSString *title;

- (void)dealloc;
- (id)description;
- (id)items;
- (id)predicate;
- (long long)section;
- (void)setItems:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSection:(long long)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sortDescriptors;
- (id)title;

@end