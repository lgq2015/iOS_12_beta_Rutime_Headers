/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion> {
    NSArray * _groups;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)groups;
- (id)initWithResponse:(id)arg1 traits:(id)arg2 mapItems:(id)arg3;

@end
