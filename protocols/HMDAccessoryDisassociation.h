/* made by EzioChiu.
 */

@protocol HMDAccessoryDisassociation <NSObject>

@required

- (void)disassociateWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)supportsDisassociation;

@end