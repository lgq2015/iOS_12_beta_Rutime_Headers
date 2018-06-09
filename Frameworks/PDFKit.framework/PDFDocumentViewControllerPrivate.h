/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentViewControllerPrivate : NSObject {
    PDFPageViewController * activePageView;
    bool  displaysRTL;
    PDFDocument * document;
    double  maxScale;
    double  minScale;
    PDFPageBackgroundManager * pageBackgroundManager;
    PDFView * pdfView;
    PDFRenderingProperties * renderingProperties;
    UIScrollView * scrollView;
    bool  showTextSelectionHandles;
}

- (void).cxx_destruct;

@end