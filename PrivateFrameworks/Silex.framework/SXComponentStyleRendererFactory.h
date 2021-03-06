/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentStyleRendererFactory : NSObject <SXComponentStyleRendererFactory> {
    <SXDocumentControllerProvider> * _documentControllerProvider;
    <SXGradientFactory> * _gradientFactory;
    <SXImageViewFactory> * _imageViewFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXDocumentControllerProvider> *documentControllerProvider;
@property (nonatomic, readonly) <SXGradientFactory> *gradientFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXImageViewFactory> *imageViewFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentStyleRendererForComponent:(id)arg1;
- (id)documentControllerProvider;
- (id)gradientFactory;
- (id)imageViewFactory;
- (id)initWithDocumentControllerProvider:(id)arg1 imageViewFactory:(id)arg2 gradientFactory:(id)arg3;

@end
