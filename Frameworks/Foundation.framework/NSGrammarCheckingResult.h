/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSGrammarCheckingResult : NSTextCheckingResult {
    NSArray * _details;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

+ (bool)supportsSecureCoding;

- (bool)_adjustRangesWithOffset:(long long)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)grammarDetails;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 details:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;

@end