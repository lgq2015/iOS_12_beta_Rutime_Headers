/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUChoicePattern : NUPattern {
    struct NSArray { Class x1; } * _choices;
}

@property (readonly) NSArray *choices;

- (void).cxx_destruct;
- (struct NSArray { Class x1; }*)choices;
- (id)init;
- (id)initWithChoices:(id)arg1;
- (bool)isEqualToChoicePattern:(id)arg1;
- (bool)isEqualToPattern:(id)arg1;
- (bool)isFixedOrder;
- (bool)match:(id)arg1 location:(unsigned long long*)arg2 count:(unsigned long long*)arg3;
- (id)optimizedPattern;
- (id)shortestMatch;
- (id)stringRepresentation;
- (id)tokens;

@end
