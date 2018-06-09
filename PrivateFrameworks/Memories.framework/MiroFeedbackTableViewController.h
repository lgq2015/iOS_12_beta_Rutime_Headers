/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroFeedbackTableViewController : UITableViewController {
    NSDictionary * _dislikedDict;
    NSArray * _dislikedKeys;
    bool  _frown;
    NSDictionary * _likedDict;
    NSArray * _likedKeys;
}

@property (nonatomic, retain) NSDictionary *dislikedDict;
@property (nonatomic, retain) NSArray *dislikedKeys;
@property (nonatomic) bool frown;
@property (nonatomic, retain) NSDictionary *likedDict;
@property (nonatomic, retain) NSArray *likedKeys;

- (void).cxx_destruct;
- (void)_addObserverForTextSizeDidChange;
- (void)_removeObserverForTextSizeDidChange;
- (void)didReceiveMemoryWarning;
- (id)dislikedDict;
- (id)dislikedKeys;
- (bool)frown;
- (id)likedDict;
- (id)likedKeys;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDislikedDict:(id)arg1;
- (void)setDislikedKeys:(id)arg1;
- (void)setFrown:(bool)arg1;
- (void)setLikedDict:(id)arg1;
- (void)setLikedKeys:(id)arg1;
- (void)submitAction;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)userTextSizeDidChange;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end