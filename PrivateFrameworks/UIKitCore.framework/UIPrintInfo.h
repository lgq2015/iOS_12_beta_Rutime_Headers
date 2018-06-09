/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPrintInfo : NSObject <NSCoding, NSCopying> {
    long long  _copies;
    long long  _duplex;
    bool  _imagePDFAnnotations;
    NSString * _jobAccountID;
    NSString * _jobName;
    long long  _orientation;
    long long  _outputType;
    NSString * _pdfPassword;
    NSString * _printerID;
    bool  _punch;
    bool  _scaleUp;
    bool  _staple;
}

@property (nonatomic) long long copies;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) long long duplex;
@property (nonatomic) bool imagePDFAnnotations;
@property (nonatomic, retain) NSString *jobAccountID;
@property (nonatomic, copy) NSString *jobName;
@property (nonatomic) long long orientation;
@property (nonatomic) long long outputType;
@property (nonatomic, retain) NSString *pdfPassword;
@property (nonatomic, copy) NSString *printerID;
@property (nonatomic) bool punch;
@property (nonatomic) bool scaleUp;
@property (nonatomic) bool staple;

+ (id)printInfo;
+ (id)printInfoWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_createPrintSettingsForPrinter:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (void)_updateWithPrinter:(id)arg1;
- (long long)copies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (long long)duplex;
- (void)encodeWithCoder:(id)arg1;
- (bool)imagePDFAnnotations;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)jobAccountID;
- (id)jobName;
- (long long)orientation;
- (long long)outputType;
- (id)pdfPassword;
- (id)printerID;
- (bool)punch;
- (bool)scaleUp;
- (void)setCopies:(long long)arg1;
- (void)setDuplex:(long long)arg1;
- (void)setImagePDFAnnotations:(bool)arg1;
- (void)setJobAccountID:(id)arg1;
- (void)setJobName:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOutputType:(long long)arg1;
- (void)setPdfPassword:(id)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setPunch:(bool)arg1;
- (void)setScaleUp:(bool)arg1;
- (void)setStaple:(bool)arg1;
- (bool)staple;

@end