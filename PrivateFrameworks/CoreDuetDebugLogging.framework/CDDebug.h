/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDebugLogging.framework/CoreDuetDebugLogging
 */

@interface CDDebug : NSObject {
    bool  verboseMode;
}

- (void)error:(long long)arg1;
- (id)init;
- (id)initWithVerboseMode:(bool)arg1;
- (void)log:(const char *)arg1;

@end
