/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFISO6709Parser : NSObject

+ (bool)parseISO6709String:(id)arg1 outLatitude:(double*)arg2 outLongitude:(double*)arg3;
+ (bool)parseISO6709String:(id)arg1 outLatitudeNumber:(id*)arg2 outLongitudeNumber:(id*)arg3;

@end
