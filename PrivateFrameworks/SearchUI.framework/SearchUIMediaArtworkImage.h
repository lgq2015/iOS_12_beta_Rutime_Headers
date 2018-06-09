/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMediaArtworkImage : SearchUIImage {
    NSString * _mediaArtworkIdentifier;
}

@property (retain) NSString *mediaArtworkIdentifier;

- (void).cxx_destruct;
- (Class)classForCoder;
- (id)initWithIdentifier:(id)arg1;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (id)mediaArtworkIdentifier;
- (void)setMediaArtworkIdentifier:(id)arg1;

@end