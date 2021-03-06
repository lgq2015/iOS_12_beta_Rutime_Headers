/* made by EzioChiu.
 */

@protocol NTKRemoteComplicationProvider <NSObject>

@required

- (void)enumerateEnabledVendorsForComplicationFamily:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*
- (NSString *)localizedAppNameForClientIdentifier:(NSString *)arg1;
- (bool)vendorExistsWithClientIdentifier:(NSString *)arg1 appBundleIdentifier:(NSString *)arg2;

@end
