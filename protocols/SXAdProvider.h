/* made by EzioChiu.
 */

@protocol SXAdProvider <NSObject>

@required

- (id /* block */)adForRequest:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 12: id /* block */, void*, id, SEL, SXAdRequest *, id /* block */, void*, void, id /* block */, SXAdResponse *, NSError *, void*

@end