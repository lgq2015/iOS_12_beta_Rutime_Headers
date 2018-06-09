/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLMarkupImageItemViewController : QLMarkupItemViewController {
    bool  _isVisible;
    UIScrollView * _scrollView;
}

+ (bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customEdgeInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })customSketchOverlayInsets;
- (id)draggableView;
- (struct CGSize { double x1; double x2; })imageSize;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)parallaxView;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewWillAppear:(bool)arg1;
- (id)scrollView;
- (void)transitionWillFinish:(bool)arg1 didComplete:(bool)arg2;

@end