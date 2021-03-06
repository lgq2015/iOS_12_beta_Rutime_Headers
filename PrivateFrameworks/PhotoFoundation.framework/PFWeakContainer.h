/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFWeakContainer : NSObject {
    id  _nilNotificationDelegate;
    _PFWeakContainerSentenal * _sentenal;
}

- (void)dealloc;
- (id)init;
- (bool)isTrackingWeakObjectDealloc:(id)arg1;
- (void)setNilNotificationDelegate:(id)arg1;
- (void)stopTrackingWeakObjectDealloc:(id)arg1;
- (void)trackWeakObjectDealloc:(id)arg1;
- (void)weakReferenceBecameNil;

@end
