/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface TUTestState : NSObject {
    NSMutableDictionary * _objects;
    int  _signalCount;
}

- (void).cxx_destruct;
- (id)description;
- (void)incrementIntegerForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)signal;
- (int)waitWithTimeout:(double)arg1;

@end
