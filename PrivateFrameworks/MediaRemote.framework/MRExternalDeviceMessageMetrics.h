/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalDeviceMessageMetrics : NSObject {
    NSMutableDictionary * _entries;
    NSString * _path;
}

- (void).cxx_destruct;
- (void)addMessage:(id)arg1 data:(id)arg2;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (void)write;

@end
