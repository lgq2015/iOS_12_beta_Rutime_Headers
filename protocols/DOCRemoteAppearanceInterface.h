/* made by EzioChiu.
 */

@protocol DOCRemoteAppearanceInterface

@required

- (void)updateAppearance:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 6: DOCAppearance *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateAppearance:(void *)arg1 shouldFlushCA:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 7: DOCAppearance *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)updateEditingTo:(bool)arg1 animated:(bool)arg2;

@end