/* made by EzioChiu.
 */

@protocol MDLTSUIOChannel <NSObject>

@required

- (void)addBarrier:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)close;
- (bool)isValid;
- (void)setLowWater:(unsigned long long)arg1;

@end