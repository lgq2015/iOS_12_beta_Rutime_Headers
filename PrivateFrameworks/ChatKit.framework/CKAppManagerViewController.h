/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAppManagerViewController : UIViewController <CKAppManagerAppTableViewCellDelegate, UISearchBarDelegate, UISearchControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    <CKAppManagerViewControllerDelegate> * _delegate;
    UIBarButtonItem * _dismissButton;
    NSArray * _favoritePlugins;
    NSArray * _plugins;
    UISearchController * _searchController;
    CKAppSearchResultsTableViewController * _searchResultsController;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAppManagerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *favoritePlugins;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *plugins;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) CKAppSearchResultsTableViewController *searchResultsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowEnablingDisabledApps;
- (void)appCell:(id)arg1 wasToggledOn:(bool)arg2;
- (id)balloonPluginManager;
- (id)delegate;
- (void)didDismissSearchController:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)favoritePlugins;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)plugins;
- (void)reloadPluginsImmediately;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)searchController;
- (id)searchResultsController;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFavoritePlugins:(id)arg1;
- (void)setPlugins:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (bool)togglePluginAtIndex:(unsigned long long)arg1 enabled:(bool)arg2;
- (void)updateEditDoneButton;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end