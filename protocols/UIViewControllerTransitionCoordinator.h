/* made by EzioChiu.
 */

@protocol UIViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinatorContext>

@required

- (bool)animateAlongsideTransition:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <UIViewControllerTransitionCoordinatorContext> *, void*, id /* block */, void*, void, id /* block */, <UIViewControllerTransitionCoordinatorContext> *, void*
- (bool)animateAlongsideTransitionInView:(void *)arg1 animation:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 13: UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <UIViewControllerTransitionCoordinatorContext> *, void*, id /* block */, void*, void, id /* block */, <UIViewControllerTransitionCoordinatorContext> *, void*
- (void)notifyWhenInteractionChangesUsingBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <UIViewControllerTransitionCoordinatorContext> *, void*
- (void)notifyWhenInteractionEndsUsingBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <UIViewControllerTransitionCoordinatorContext> *, void*

@end