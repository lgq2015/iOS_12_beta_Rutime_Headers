/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSEnvironmentDescription : NSObject <BSXPCCoding> {
    SSEnvironmentDescriptionAppleInternalOptions * _appleInternalOptions;
    NSDate * _date;
    NSArray * _elements;
    NSString * _identifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _imagePixelSize;
    double  _imageScale;
    SSImageSurface * _imageSurface;
    unsigned long long  _presentationMode;
    SSUIServiceOptions * _serviceOptions;
    NSString * _sessionIdentifier;
}

@property (nonatomic, retain) SSEnvironmentDescriptionAppleInternalOptions *appleInternalOptions;
@property (nonatomic, readonly) NSString *briefDescription;
@property (nonatomic, readonly) BSSettings *bsSettings;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *elementUnitRects;
@property (nonatomic, readonly) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) struct CGSize { double x1; double x2; } imagePixelSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imagePointSize;
@property (nonatomic) double imageScale;
@property (nonatomic, retain) SSImageSurface *imageSurface;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, retain) SSUIServiceOptions *serviceOptions;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleInternalOptions;
- (id)briefDescription;
- (id)bsSettings;
- (id)date;
- (id)elementUnitRects;
- (id)elements;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)identifier;
- (struct CGSize { double x1; double x2; })imagePixelSize;
- (struct CGSize { double x1; double x2; })imagePointSize;
- (double)imageScale;
- (id)imageSurface;
- (id)init;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned long long)presentationMode;
- (id)serviceOptions;
- (id)sessionIdentifier;
- (void)setAppleInternalOptions:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setImagePixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageScale:(double)arg1;
- (void)setImageSurface:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setServiceOptions:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)takeElementsFromDisplayLayout:(id)arg1;

@end