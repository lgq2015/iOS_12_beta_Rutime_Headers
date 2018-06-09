/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <MKPlaceCardEncyclopedicControllerDelegate> * _encyclopedicControllerDelegate;
    <GEOEncyclopedicInfo> * _encyclopedicInfo;
    NSMutableArray * _factoidCells;
    bool  _textBlockExpanded;
    MKPlaceTextBlockCell * _textCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <MKPlaceCardEncyclopedicControllerDelegate> *encyclopedicControllerDelegate;
@property (nonatomic, retain) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_factoids;
- (id)_textBlockText;
- (id)_textBlockTitle;
- (void)_updateViews;
- (void)_viewEncyclopedicContent;
- (id)encyclopedicControllerDelegate;
- (id)encyclopedicInfo;
- (id)infoCardChildPossibleActions;
- (void)setEncyclopedicControllerDelegate:(id)arg1;
- (void)setEncyclopedicInfo:(id)arg1;
- (void)viewDidLoad;

@end