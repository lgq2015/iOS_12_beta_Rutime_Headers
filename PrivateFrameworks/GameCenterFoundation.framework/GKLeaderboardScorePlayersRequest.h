/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest {
    NSArray * _playerInternals;
}

@property (nonatomic, copy) NSArray *playerInternals;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)playerInternals;
- (void)setPlayerInternals:(id)arg1;

@end
