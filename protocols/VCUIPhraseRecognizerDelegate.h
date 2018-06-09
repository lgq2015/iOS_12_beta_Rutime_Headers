/* made by EzioChiu.
 */

@protocol VCUIPhraseRecognizerDelegate <NSObject>

@optional

- (void)phraseRecognizer:(VCUIPhraseRecognizer *)arg1 availabilityDidChange:(bool)arg2;
- (void)phraseRecognizer:(VCUIPhraseRecognizer *)arg1 didReceiveFinalTranscription:(NSString *)arg2 alternativeTranscriptions:(NSArray *)arg3;
- (void)phraseRecognizer:(VCUIPhraseRecognizer *)arg1 didReceiveHypothesizedTranscription:(NSString *)arg2;
- (void)phraseRecognizerDidStartRecording:(VCUIPhraseRecognizer *)arg1 successfully:(bool)arg2 error:(NSError *)arg3;
- (void)phraseRecognizerDidStopRecording:(VCUIPhraseRecognizer *)arg1 withError:(NSError *)arg2;

@end