/* made by EzioChiu.
 */

@protocol NTKActivityFaceViewFactoryDelegate <NSObject>

@required

- (void)applyEntryModel:(NTKWellnessEntryModel *)arg1 animated:(bool)arg2;
- (void)applyEntryModelWithUnfilledRings:(NTKWellnessEntryModel *)arg1;

@end
