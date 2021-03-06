/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTextComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    <SXActionProvider> * _actionProvider;
    <SXDocumentControllerProvider> * _documentControllerProvider;
    <SXTextComponentLayoutHosting> * _textComponentLayoutHosting;
}

@property (nonatomic, readonly) <SXActionProvider> *actionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXTextComponentLayoutHosting> *textComponentLayoutHosting;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)actionProvider;
- (id)documentControllerProvider;
- (id)initWithDocumentControllerProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 actionProvider:(id)arg3;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3;
- (id)textComponentLayoutHosting;
- (id)type;

@end
