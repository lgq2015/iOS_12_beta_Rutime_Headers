/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARPromise : NSObject {
    bool  _fulfilled;
    FutureValue * _futureValue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)fulfill:(id)arg1;
- (id)future;
- (id)futureValue;
- (id)init;

@end
