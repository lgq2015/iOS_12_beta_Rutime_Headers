/* made by EzioChiu.
 */

@protocol TKTonePickerTableViewControllerHelper <NSObject>

@required

- (void)loadViewForTonePickerTableViewController:(UITableViewController<TKTonePickerTableViewLayoutMarginsObserver><TKTonePickerTableViewSeparatorObserver> *)arg1;
- (TKTonePickerItem *)selectedTonePickerItem;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForPickerRowItem:(TKPickerRowItem *)arg2;
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2 forPickerRowItem:(TKPickerRowItem *)arg3;
- (void)tableView:(UITableView *)arg1 updateCell:(UITableViewCell *)arg2 withSeparatorForPickerRowItem:(TKPickerRowItem *)arg3;
- (void)tableView:(UITableView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forPickerRowItem:(TKPickerRowItem *)arg3;
- (void)tonePickerTableViewControllerWillBeDeallocated:(UITableViewController<TKTonePickerTableViewLayoutMarginsObserver><TKTonePickerTableViewSeparatorObserver> *)arg1;
- (void)tonePickerTableViewWillDisappear:(bool)arg1;
- (void)updateCell:(TKPickerTableViewCell *)arg1 withCheckedStatus:(bool)arg2 forTonePickerItem:(TKTonePickerItem *)arg3;
- (void)updateCell:(TKPickerTableViewCell *)arg1 withDetailText:(NSString *)arg2;
- (void)updateDividerContentColorToMatchSeparatorColorInTableView:(UITableView *)arg1;

@end