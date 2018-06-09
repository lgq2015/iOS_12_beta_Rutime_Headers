/* made by EzioChiu.
 */

@protocol PGPictureInPictureRemoteObjectDelegate <NSObject>

@optional

- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didCreatePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 didShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willDestroyPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willHidePictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (void)pictureInPictureRemoteObject:(PGPictureInPictureRemoteObject *)arg1 willShowPictureInPictureViewController:(PGPictureInPictureViewController *)arg2;
- (bool)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(PGPictureInPictureRemoteObject *)arg1;

@end