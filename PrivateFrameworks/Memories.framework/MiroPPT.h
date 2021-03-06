/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPPT : NSObject {
    NSString * _currentTestName;
    NSDictionary * _currentTestOptions;
    UIViewController * _playerViewController;
}

@property (nonatomic, retain) NSString *currentTestName;
@property (nonatomic, retain) NSDictionary *currentTestOptions;
@property (nonatomic, retain) UIViewController *playerViewController;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)currentTestIterations;
- (int)currentTestLength;
- (id)currentTestName;
- (int)currentTestOffset;
- (id)currentTestOptions;
- (bool)dismissAllModalViewControllers;
- (void)failedCurrentTest;
- (void)finishedCurrentTest;
- (void)finishedCurrentTestWithExtraResults:(id)arg1;
- (id)playerViewController;
- (bool)runTest:(id)arg1 options:(id)arg2;
- (void)setCurrentTestName:(id)arg1;
- (void)setCurrentTestOptions:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)startedCurrentTest;

@end
