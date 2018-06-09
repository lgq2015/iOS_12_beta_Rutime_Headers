/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapURLBuilder : NSObject {
    NSMutableDictionary * _dict;
    GEOURLExtraStorage * _extraStorage;
}

@property (nonatomic, retain) GEOURLExtraStorage *extraStorage;

+ (id)URLForAddress:(id)arg1;
+ (id)URLForAddress:(id)arg1 label:(id)arg2;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 label:(id)arg3;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 useWebPlaceCard:(bool)arg5;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1 label:(id)arg2;
+ (id)URLForDirectionsFrom:(id)arg1 to:(id)arg2;
+ (id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 transport:(int)arg3;
+ (id)URLForDirectionsFromHereTo:(id)arg1;
+ (id)URLForDirectionsFromHereTo:(id)arg1 transport:(int)arg2;
+ (id)URLForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct { double x1; double x2; })arg4 address:(id)arg5;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct { double x1; double x2; })arg4 address:(id)arg5 extraStorage:(id)arg6;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct { double x1; double x2; })arg4 address:(id)arg5 extraStorage:(id)arg6 useWebPlaceCard:(bool)arg7;
+ (id)URLForSearch:(id)arg1;
+ (id)URLForSearch:(id)arg1 at:(struct { double x1; double x2; })arg2 span:(struct { double x1; double x2; })arg3;
+ (id)URLForSearch:(id)arg1 at:(struct { double x1; double x2; })arg2 zoomLevel:(double)arg3;
+ (id)URLForSearch:(id)arg1 near:(struct { double x1; double x2; })arg2;
+ (id)URLForShowFavoritesType:(long long)arg1;
+ (id)URLForTransitLine:(unsigned long long)arg1 withName:(id)arg2 mapRegion:(id)arg3;

- (void).cxx_destruct;
- (void)_removeParametersAllBut:(id)arg1;
- (id)_stringForCoordinate2DPointer:(struct { double x1; double x2; }*)arg1;
- (id)_stringForCoordinateSpanPointer:(struct { double x1; double x2; }*)arg1;
- (id)build;
- (id)buildForWeb;
- (id)buildForWebPlaceCard;
- (id)extraStorage;
- (id)initForAddress:(id)arg1 label:(id)arg2;
- (id)initForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 label:(id)arg3;
- (id)initForCoordinate:(struct { double x1; double x2; })arg1 label:(id)arg2;
- (id)initForDirectionsTo:(id)arg1;
- (id)initForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3;
- (id)initForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3;
- (id)initForSearch:(id)arg1;
- (id)initForShowFavoritesType:(long long)arg1;
- (id)initForTransitLine:(unsigned long long)arg1 withName:(id)arg2 mapRegion:(id)arg3;
- (void)setBusinessAddress:(id)arg1;
- (void)setBusinessCoordinate:(struct { double x1; double x2; })arg1;
- (void)setContentProvider:(id)arg1;
- (void)setDisplayRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExtraStorage:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setNear:(struct { double x1; double x2; })arg1;
- (void)setSearchLocation:(struct { double x1; double x2; })arg1 span:(struct { double x1; double x2; })arg2;
- (void)setSearchLocation:(struct { double x1; double x2; })arg1 zoomLevel:(double)arg2;
- (void)setStartAddress:(id)arg1;
- (void)setTransportType:(int)arg1;

@end