/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisMovieInfoAndCallback : NSObject {
    id /* block */  _callback;
    BWIrisMovieInfo * _info;
    bool  _processed;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly) BWIrisMovieInfo *info;
@property (nonatomic) bool processed;

+ (id)movieInfoAndCallbackWithMovieInfo:(id)arg1 callback:(id /* block */)arg2;

- (id)_initWithMovieInfo:(id)arg1 callback:(id /* block */)arg2;
- (id /* block */)callback;
- (void)dealloc;
- (id)info;
- (bool)processed;
- (void)setProcessed:(bool)arg1;

@end