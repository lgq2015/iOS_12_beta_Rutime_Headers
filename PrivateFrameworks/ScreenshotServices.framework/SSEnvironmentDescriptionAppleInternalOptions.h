/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSEnvironmentDescriptionAppleInternalOptions : NSObject <BSXPCCoding> {
    SSUIRunPPTServiceRequest * _runPPTServiceRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SSUIRunPPTServiceRequest *runPPTServiceRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)runPPTServiceRequest;
- (void)setRunPPTServiceRequest:(id)arg1;

@end
