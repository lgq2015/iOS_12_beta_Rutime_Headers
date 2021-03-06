/* made by EzioChiu.
 */

@protocol PXNavigableCloudFeedViewController <NSObject>

@required

- (void)navigateToCloudFeedAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLManagedAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToCloudFeedComment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedComment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToNewestContentAnimated:(bool)arg1;
- (void)navigateToRevealCloudFeedAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLManagedAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealCloudFeedComment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedComment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealCloudFeedInvitationForAlbum:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedAlbum *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*

@end
