/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragDestinationControllerReorderingState : NSObject {
    UICollectionView * _collectionView;
    long long  _dragMovementPhase;
    bool  _hasStartedInteractiveReorder;
    double  _reorderBecamePossibleTime;
    _UIDragMovementCadenceSettings * _reorderCadenceSettings;
    long long  _reorderCount;
    _UIDragDestinationControllerSessionState * _sessionState;
    bool  _supportsLocalSessionReordering;
    _UIVelocityIntegrator * _velocityIntegrator;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long dragMovementPhase;
@property (nonatomic, readonly) bool hasPerformedReordering;
@property (nonatomic) bool hasStartedInteractiveReorder;
@property (nonatomic) double reorderBecamePossibleTime;
@property (nonatomic, retain) _UIDragMovementCadenceSettings *reorderCadenceSettings;
@property (nonatomic) long long reorderCount;
@property (nonatomic, retain) _UIDragDestinationControllerSessionState *sessionState;
@property (nonatomic) bool supportsLocalSessionReordering;
@property (nonatomic, retain) _UIVelocityIntegrator *velocityIntegrator;

- (void).cxx_destruct;
- (id)_reorderCadenceSettings;
- (id)collectionView;
- (void)didBeginInteractiveReorder;
- (void)didEndInteractiveReorder;
- (void)didReorder;
- (long long)dragMovementPhase;
- (bool)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)arg1;
- (bool)hasPerformedReordering;
- (bool)hasStartedInteractiveReorder;
- (id)initWithSessionState:(id)arg1 collectionView:(id)arg2;
- (double)reorderBecamePossibleTime;
- (id)reorderCadenceSettings;
- (long long)reorderCount;
- (void)reorderResetToStartingLocation;
- (void)reorderingDidBecomePossible;
- (id)sessionState;
- (void)setCollectionView:(id)arg1;
- (void)setDragMovementPhase:(long long)arg1;
- (void)setHasStartedInteractiveReorder:(bool)arg1;
- (void)setReorderBecamePossibleTime:(double)arg1;
- (void)setReorderCadenceSettings:(id)arg1;
- (void)setReorderCount:(long long)arg1;
- (void)setSessionState:(id)arg1;
- (void)setSupportsLocalSessionReordering:(bool)arg1;
- (void)setVelocityIntegrator:(id)arg1;
- (bool)supportsLocalSessionReordering;
- (void)velocityExceededThreshold;
- (id)velocityIntegrator;

@end