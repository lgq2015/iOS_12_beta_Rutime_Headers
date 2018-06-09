/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMatchup : SADomainObject

@property (nonatomic, retain) SASportsEntity *awayEntity;
@property (nonatomic, copy) NSArray *awayLineScores;
@property (nonatomic, copy) NSString *awayScore;
@property (nonatomic, copy) NSNumber *awayShootoutPoints;
@property (nonatomic, copy) NSString *awayTeamRecordSummary;
@property (nonatomic, copy) NSString *currentPeriod;
@property (nonatomic, copy) NSNumber *expectedLineScoreCount;
@property (nonatomic, copy) NSString *favoredEntity;
@property (nonatomic, copy) NSString *gameSummary;
@property (nonatomic, copy) NSString *gameType;
@property (nonatomic, retain) <SAServerBoundCommand> *getAppsCommand;
@property (nonatomic, retain) <SAServerBoundCommand> *getModalDetailSnippetCommand;
@property (nonatomic, retain) SASportsEntity *homeEntity;
@property (nonatomic, copy) NSArray *homeLineScores;
@property (nonatomic, copy) NSString *homeScore;
@property (nonatomic, copy) NSNumber *homeShootoutPoints;
@property (nonatomic, copy) NSString *homeTeamRecordSummary;
@property (nonatomic) bool isAvailable;
@property (nonatomic, copy) NSNumber *isExplicitlyEndOfPeriod;
@property (nonatomic) bool isOnNow;
@property (nonatomic) bool isWatchlistable;
@property (nonatomic, copy) NSString *line;
@property (nonatomic, retain) SALCMLiveTuneInButton *liveTuneInButton;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic, copy) NSString *matchupOrder;
@property (nonatomic, copy) NSString *overUnder;
@property (nonatomic, copy) NSString *periodDescription;
@property (nonatomic, copy) NSArray *playSummaries;
@property (nonatomic, copy) NSNumber *playoff;
@property (nonatomic, retain) SAUIAppPunchOut *punchout;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic, copy) NSNumber *statsId;
@property (nonatomic, copy) NSString *status;
@property (nonatomic, copy) NSString *timeRemaining;
@property (nonatomic, copy) NSNumber *timeTBD;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) SALCMToggleButton *toggleButton;
@property (nonatomic, copy) NSString *tournamentSeriesDescription;
@property (nonatomic, copy) NSArray *tvChannels;
@property (nonatomic, copy) NSString *winningEntity;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)matchup;
+ (id)matchupWithDictionary:(id)arg1 context:(id)arg2;

- (id)awayEntity;
- (id)awayLineScores;
- (id)awayScore;
- (id)awayShootoutPoints;
- (id)awayTeamRecordSummary;
- (id)currentPeriod;
- (id)encodedClassName;
- (id)expectedLineScoreCount;
- (id)favoredEntity;
- (id)gameSummary;
- (id)gameType;
- (id)getAppsCommand;
- (id)getModalDetailSnippetCommand;
- (id)groupIdentifier;
- (id)homeEntity;
- (id)homeLineScores;
- (id)homeScore;
- (id)homeShootoutPoints;
- (id)homeTeamRecordSummary;
- (bool)isAvailable;
- (id)isExplicitlyEndOfPeriod;
- (bool)isOnNow;
- (bool)isWatchlistable;
- (id)line;
- (id)liveTuneInButton;
- (id)location;
- (id)locationName;
- (id)matchupOrder;
- (id)overUnder;
- (id)periodDescription;
- (id)playSummaries;
- (id)playoff;
- (id)punchout;
- (void)setAwayEntity:(id)arg1;
- (void)setAwayLineScores:(id)arg1;
- (void)setAwayScore:(id)arg1;
- (void)setAwayShootoutPoints:(id)arg1;
- (void)setAwayTeamRecordSummary:(id)arg1;
- (void)setCurrentPeriod:(id)arg1;
- (void)setExpectedLineScoreCount:(id)arg1;
- (void)setFavoredEntity:(id)arg1;
- (void)setGameSummary:(id)arg1;
- (void)setGameType:(id)arg1;
- (void)setGetAppsCommand:(id)arg1;
- (void)setGetModalDetailSnippetCommand:(id)arg1;
- (void)setHomeEntity:(id)arg1;
- (void)setHomeLineScores:(id)arg1;
- (void)setHomeScore:(id)arg1;
- (void)setHomeShootoutPoints:(id)arg1;
- (void)setHomeTeamRecordSummary:(id)arg1;
- (void)setIsAvailable:(bool)arg1;
- (void)setIsExplicitlyEndOfPeriod:(id)arg1;
- (void)setIsOnNow:(bool)arg1;
- (void)setIsWatchlistable:(bool)arg1;
- (void)setLine:(id)arg1;
- (void)setLiveTuneInButton:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setMatchupOrder:(id)arg1;
- (void)setOverUnder:(id)arg1;
- (void)setPeriodDescription:(id)arg1;
- (void)setPlaySummaries:(id)arg1;
- (void)setPlayoff:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStatsId:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimeRemaining:(id)arg1;
- (void)setTimeTBD:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setToggleButton:(id)arg1;
- (void)setTournamentSeriesDescription:(id)arg1;
- (void)setTvChannels:(id)arg1;
- (void)setWinningEntity:(id)arg1;
- (id)startTime;
- (id)statsId;
- (id)status;
- (id)timeRemaining;
- (id)timeTBD;
- (id)title;
- (id)toggleButton;
- (id)tournamentSeriesDescription;
- (id)tvChannels;
- (id)winningEntity;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)siriui_channelsString;
- (id)siriui_firstEntity;
- (id)siriui_firstLineScores;
- (id)siriui_firstScore;
- (bool)siriui_homeIsFirst;
- (bool)siriui_isInTheFuture;
- (id)siriui_localizedScheduleStatusForLeague:(id)arg1 sport:(id)arg2 showTimeIfToday:(bool)arg3;
- (id)siriui_secondEntity;
- (id)siriui_secondLineScores;
- (id)siriui_secondScore;
- (id)siriui_teamVsTeam;
- (id)siriui_venueLocation;

@end