/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventTravelTimeEditViewController : EKEditItemViewController <EKEditItemViewControllerDelegate, EKTravelRouteEstimationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSDate * _arrivalDate;
    EKCalendarItem * _calendarItem;
    NSIndexPath * _checkedItem;
    bool  _customTimesGroupIsShowing;
    double  _customTravelTimeDuration;
    EKStructuredLocation * _destinationStructuredLocation;
    bool  _estimatedRowIsChecked;
    bool  _estimationGroupIsShowing;
    EKEventStore * _eventStore;
    bool  _externallySetValueGroupIsShowing;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initFrame;
    bool  _isAnimatingTableSections;
    bool  _isOriginSelectionVisible;
    EKStructuredLocation * _originStructuredLocation;
    long long  _originalSelectedRoutingMode;
    double  _originalSelectedTravelTime;
    bool  _pendingReloadData;
    EKTravelRouteEstimationController * _routeEstimationControler;
    NSString * _routeEstimationErrorMessage;
    long long  _selectedRoutingMode;
    double  _selectedTravelTime;
    UIView * _shadowView;
    bool  _suppressErrors;
    UISwitch * _switchControl;
    UITableView * _table;
    long long  _travelTimeSelectedChoice;
}

@property (nonatomic, retain) NSDate *arrivalDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKStructuredLocation *destinationStructuredLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EKStructuredLocation *originStructuredLocation;
@property (nonatomic) long long selectedRoutingMode;
@property (nonatomic) double selectedTravelTime;
@property (readonly) Class superclass;

+ (id)_cannotProvideDirectionsLocalizedString;
+ (id)_directionsCouldNotBeFoundLocalizedString;
+ (id)_okLocalizedString;
+ (id)_startingLocationLocalizedString;
+ (id)_travelTimeLocalizedString;

- (void).cxx_destruct;
- (void)_autoselectFromAvailableChoices;
- (void)_checkItemAtIndexPath:(id)arg1;
- (void)_contentCategorySizeChanged:(id)arg1;
- (unsigned long long)_customTravelTimeSection;
- (id)_errorStringForMapKitErrorCode:(unsigned long long)arg1;
- (unsigned long long)_estimatedTravelTimeSection;
- (unsigned long long)_externallySetValueTravelTimeSection;
- (void)_handleEstimationControllerTravelTimeLookupErrors;
- (void)_handleOriginLocationErrorsWithAlert:(bool)arg1;
- (id)_indexPathForSelectedTravelTime;
- (void)_layoutShadowView;
- (void)_locationsChanged;
- (long long)_numberOfEstimatedTravelTimeResultRows;
- (void)_originLocationButtonWasTapped;
- (id)_routeEstimationControler;
- (void)_setEstimationActive:(bool)arg1;
- (bool)_shouldAutoSelectEstimatedTravelTimeOnLookupCompletion;
- (void)_showRouteEstimationAlert;
- (bool)_showingOptions;
- (bool)_showingOptionsInitialState;
- (id)_stringForOriginLocation;
- (unsigned long long)_toggleSwitchSection;
- (void)_travelTimeActivationSwitchChanged:(id)arg1;
- (void)_updateTableView;
- (void)_updateVisibleSections;
- (id)arrivalDate;
- (id)description;
- (id)destinationStructuredLocation;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)editItemViewControllerShouldShowDetachAlert;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 eventStore:(id)arg4;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)originStructuredLocation;
- (void)routeEstimationControllerDidBeginOriginLocationLookup:(id)arg1;
- (void)routeEstimationControllerDidBeginTravelTimeLookup:(id)arg1;
- (void)routeEstimationControllerDidFinishOriginLocationLookup:(id)arg1;
- (void)routeEstimationControllerDidFinishTravelTimeLookup:(id)arg1;
- (long long)selectedRoutingMode;
- (double)selectedTravelTime;
- (void)setArrivalDate:(id)arg1;
- (void)setCell:(id)arg1 checked:(bool)arg2;
- (void)setDestinationStructuredLocation:(id)arg1;
- (void)setOriginStructuredLocation:(id)arg1;
- (void)setSelectedRoutingMode:(long long)arg1;
- (void)setSelectedTravelTime:(double)arg1;
- (void)setTravelTimeSelectedChoice:(long long)arg1;
- (bool)setTravelTimeSelectedChoiceEstimatedRowAtIndex:(unsigned long long)arg1;
- (void)setTravelTimeSelectedChoiceToFirstValidEstimatedRow;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (long long)travelTimeSelectedChoice;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end