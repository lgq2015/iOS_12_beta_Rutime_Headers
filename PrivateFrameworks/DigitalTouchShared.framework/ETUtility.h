/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETUtility : NSObject

+ (id)dateFormatWithMilliseconds:(id)arg1;
+ (id)destinationFromMessageIdentifier:(id)arg1 keepPrefix:(bool)arg2;
+ (id)imageWithEllipseDiameter:(double)arg1 strokeWidth:(double)arg2 strokeColor:(id)arg3 fillDiameter:(double)arg4 fillColor:(id)arg5 edgeOverlap:(double)arg6;
+ (bool)isRetailDemo;
+ (long long)lastInteractiveZoomLevel;
+ (id)removePrefixFromDestination:(id)arg1;
+ (bool)shouldArchiveSentMessages;

@end