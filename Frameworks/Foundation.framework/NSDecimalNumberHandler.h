/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDecimalNumberHandler : NSObject <NSCoding, NSDecimalNumberBehaviors> {
    unsigned int  _raiseOnDivideByZero;
    unsigned int  _raiseOnExactness;
    unsigned int  _raiseOnOverflow;
    unsigned int  _raiseOnUnderflow;
    void * _reserved;
    void * _reserved2;
    unsigned int  _roundingMode;
    unsigned int  _scale;
    unsigned int  _unused;
}

+ (id)decimalNumberHandlerWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(bool)arg3 raiseOnOverflow:(bool)arg4 raiseOnUnderflow:(bool)arg5 raiseOnDivideByZero:(bool)arg6;
+ (id)defaultDecimalNumberHandler;

- (void)encodeWithCoder:(id)arg1;
- (id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(bool)arg3 raiseOnOverflow:(bool)arg4 raiseOnUnderflow:(bool)arg5 raiseOnDivideByZero:(bool)arg6;
- (unsigned long long)roundingMode;
- (short)scale;

@end