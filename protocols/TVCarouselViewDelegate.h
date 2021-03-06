/* made by EzioChiu.
 */

@protocol TVCarouselViewDelegate <NSObject>

@optional

- (void)carouselView:(TVCarouselView *)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(TVCarouselView *)arg1 didPlayItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(TVCarouselView *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewDidScroll:(TVCarouselView *)arg1;

@end
