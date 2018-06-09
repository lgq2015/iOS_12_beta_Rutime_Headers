/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFContactImage : SFImage <NSCopying, NSSecureCoding, SFContactImage> {
    NSString * _contactIdentifier;
    NSArray * _contactIdentifiers;
    struct { 
        unsigned int threeDTouchEnabled : 1; 
    }  _has;
    bool  _threeDTouchEnabled;
}

@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSArray *contactIdentifiers;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (copy) NSData *imageData;
@property (nonatomic) bool isTemplate;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *keyColor;
@property (nonatomic) double scale;
@property (nonatomic) bool shouldCropToCircle;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic) bool threeDTouchEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)contactIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasThreeDTouchEnabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)jsonData;
- (void)setContactIdentifier:(id)arg1;
- (void)setContactIdentifiers:(id)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)threeDTouchEnabled;

@end