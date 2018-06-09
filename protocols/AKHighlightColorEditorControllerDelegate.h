/* made by EzioChiu.
 */

@protocol AKHighlightColorEditorControllerDelegate <AKAnnotationEditorDelegate>

@required

- (void)editorController:(AKHighlightColorEditorController *)arg1 deleteAnnotation:(AKAnnotation *)arg2;
- (void)editorController:(AKHighlightColorEditorController *)arg1 editNote:(AKAnnotation *)arg2;
- (void)editorController:(AKHighlightColorEditorController *)arg1 setTheme:(AKAnnotationTheme *)arg2 forAnnotation:(AKAnnotation *)arg3;
- (void)editorController:(AKHighlightColorEditorController *)arg1 showEditMenuForAnnotation:(AKAnnotation *)arg2;

@optional

- (bool)editorController:(AKHighlightColorEditorController *)arg1 isRightArrowEnabledForAnnotation:(AKAnnotation *)arg2;
- (bool)editorController:(AKHighlightColorEditorController *)arg1 isSharingEnabledForAnnotation:(AKAnnotation *)arg2;
- (void)editorController:(AKHighlightColorEditorController *)arg1 shareAnnotation:(AKAnnotation *)arg2;

@end