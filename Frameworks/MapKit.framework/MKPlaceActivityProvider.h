/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceActivityProvider : NSObject {
    <MKPlaceActivityProviderDelegate> * _delegate;
    MKMapItem * _mapItem;
}

@property (nonatomic) <MKPlaceActivityProviderDelegate> *delegate;
@property (nonatomic, retain) MKMapItem *mapItem;

- (void).cxx_destruct;
- (id)activityAnnotationView;
- (id)activityTitle;
- (id)activityURL;
- (id)delegate;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (void)setDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (bool)shouldUseWebPlaceCardForActivityType:(id)arg1;
- (id)webPlaceCardURL;

@end
