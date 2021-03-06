/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceClassifierBoostedPixelDifference : NSObject {
    struct shared_ptr<vision::mod::FaceClassifier_BoostedPixelDifference> { 
        struct FaceClassifier_BoostedPixelDifference {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mPixelDifferenceFaceClassifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)predictFaceOnImageCrop:(id)arg1 faceObservation:(id)arg2 error:(id*)arg3;

@end
