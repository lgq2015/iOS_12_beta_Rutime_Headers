/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMSpeechRecognizerOperation : VMOperation {
    <VMSpeechRecognizer> * _speechRecognizer;
}

@property (readonly) <VMSpeechRecognizer> *speechRecognizer;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (id)initWithSpeechRecognizer:(id)arg1;
- (id)locale;
- (id)speechRecognizer;

@end
