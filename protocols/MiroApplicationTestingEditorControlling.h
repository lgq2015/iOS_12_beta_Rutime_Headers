/* made by EzioChiu.
 */

@protocol MiroApplicationTestingEditorControlling <NSObject>

@required

- (void)addWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeClipAtIndexPath:(NSIndexPath *)arg1;
- (void)setTimelineViewController:(MiroTimelineClipCollectionViewController *)arg1;
- (MiroTimelineClipCollectionViewController *)timelineViewController;

@end
