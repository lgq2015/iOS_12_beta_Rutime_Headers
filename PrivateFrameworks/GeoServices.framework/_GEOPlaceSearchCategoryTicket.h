/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchCategoryTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCategoriesTicket>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
