/* made by EzioChiu.
 */

@protocol CVAMattingVideoPipeline <CVAVideoPipeline>

@required

- (<CVADisparityPostprocessingCompletionDelegate> *)disparityPostprocessingCompletionDelegate;
- (int)extractMatteWithRequest:(CVAMattingRequest *)arg1;
- (int)extractMatteWithRequest:(void *)arg1 disparityPostprocessingCompletionHandler:(void *)arg2 mattingCompletionHandler:(void *)arg3; // needs 3 arg types, found 15: CVAMattingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CVADisparityPostprocessingRequest *, <CVADisparityPostprocessingResult> *, void*, id /* block */, void*, void, id /* block */, CVAMattingRequest *, <CVAMattingResult> *, void*
- (<CVAMattingCompletionDelegate> *)mattingCompletionDelegate;
- (void)setDisparityPostprocessingCompletionDelegate:(id <CVADisparityPostprocessingCompletionDelegate>)arg1;
- (void)setMattingCompletionDelegate:(id <CVAMattingCompletionDelegate>)arg1;

@end
