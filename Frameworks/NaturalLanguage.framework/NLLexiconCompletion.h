/* made by EzioChiu
   Image: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLLexiconCompletion : NSObject {
    double  _score;
    unsigned int  _tokenID;
}

- (id)description;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2;
- (double)score;
- (unsigned int)tokenID;

@end
