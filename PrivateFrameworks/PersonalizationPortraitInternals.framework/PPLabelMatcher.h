/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPLabelMatcher : NSObject {
    struct NSDictionary { Class x1; } * _map;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (struct NSDictionary { Class x1; }*)_generateMap;
- (id)init;
- (unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2;

@end
