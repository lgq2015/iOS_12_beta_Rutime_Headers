/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDeviceAuthorizationRequestInternal : NSObject {
    NSError * error;
    <AVOutputDeviceAuthorizationRequestImpl> * impl;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    long long  status;
}

@end