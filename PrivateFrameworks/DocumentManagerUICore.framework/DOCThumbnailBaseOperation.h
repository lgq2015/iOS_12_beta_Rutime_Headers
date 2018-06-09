/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailBaseOperation : NSOperation <DOCThumbnailSubOperationProviding> {
    <DOCThumbnailOperationDelegate> * _delegate;
    long long  _executionState;
    bool  _representativeIcon;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    unsigned long long  _style;
}

@property (nonatomic) <DOCThumbnailOperationDelegate> *delegate;
@property (nonatomic, readonly) long long executionState;
@property (nonatomic) bool representativeIcon;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, readonly) NSOperation *subOperation;

+ (id)processImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 backgroundDecorator:(id /* block */)arg5 foregroundDecorator:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)delegate;
- (long long)executionState;
- (bool)generateThumbnail:(id*)arg1 representativeIcon:(bool*)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 delegate:(id)arg3 style:(unsigned long long)arg4;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)notifyDelegateWithThumbnail:(id)arg1 failed:(bool)arg2 representativeIcon:(bool)arg3;
- (bool)representativeIcon;
- (double)scale;
- (void)setDelegate:(id)arg1;
- (void)setExecutionState:(long long)arg1;
- (void)setRepresentativeIcon:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (void)start;
- (unsigned long long)style;
- (id)subOperation;

@end