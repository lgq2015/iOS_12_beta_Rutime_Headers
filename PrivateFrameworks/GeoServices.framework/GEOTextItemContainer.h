/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTextItemContainer : NSObject <GEOTextItemContainer> {
    <GEOTextItemDisplayConfig> * _displayConfig;
    NSArray * _textItems;
}

@property (nonatomic, readonly) <GEOTextItemDisplayConfig> *displayConfig;
@property (nonatomic, readonly) NSArray *textItems;

- (void).cxx_destruct;
- (id)displayConfig;
- (id)initWithDisplayConfig:(id)arg1 textItems:(id)arg2;
- (id)initWithTextItemContainer:(id)arg1;
- (id)textItems;

@end