/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestinationOffRouteScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {
    bool  _destinationInvalid;
    NSMutableArray * _offRouteEntries;
    int  _score;
}

@property (nonatomic, retain) NSMutableArray *offRouteEntries;

+ (double)weight;

- (void).cxx_destruct;
- (void)_updateScoreAndDestinationInvalid;
- (id)descriptionExtras;
- (bool)destinationInvalid;
- (id)initWithDestination:(id)arg1;
- (id)offRouteEntries;
- (int)score;
- (void)setOffRouteEntries:(id)arg1;
- (void)updateForLocation:(id)arg1;
- (void)updateForRerouteWithLocation:(id)arg1;
- (void)updateScoreIfPossible;

@end