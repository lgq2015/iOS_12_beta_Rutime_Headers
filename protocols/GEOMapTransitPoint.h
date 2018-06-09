/* made by EzioChiu.
 */

@protocol GEOMapTransitPoint <NSObject>

@required

- (double)boundingRadius;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct { double x1; double x2; })coordinate;
- (double)distanceInMetersFrom:(struct { double x1; double x2; })arg1;
- (GEOMapRequest *)findAccessPoints:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOMapTransitAccessPoint> *, void*, id /* block */, void*, void, id /* block */, GEOMapRequest *, void*
- (GEOMapRequest *)findGeometryWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOMapRequest *, void*
- (NSString *)internalName;
- (struct { double x1; double x2; }*)polygonPoints;
- (long long)polygonPointsCount;
- (unsigned long long)transitID;

@end