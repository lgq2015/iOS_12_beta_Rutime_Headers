/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPersonsModelPrediction : NSObject <NSCopying, NSSecureCoding> {
    float  _confidence;
    VNFaceObservation * _faceObservation;
    <NSObject><NSCopying><NSSecureCoding> * _predictedPersonUniqueIdentifier;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) VNFaceObservation *faceObservation;
@property (nonatomic, readonly, copy) <NSObject><NSCopying><NSSecureCoding> *predictedPersonUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)faceObservation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceObservation:(id)arg1 predictedPersonUniqueIdentifier:(id)arg2 confidence:(float)arg3;
- (bool)isEqual:(id)arg1;
- (id)predictedPersonUniqueIdentifier;

@end