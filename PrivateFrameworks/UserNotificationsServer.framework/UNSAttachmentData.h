/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSAttachmentData : NSObject <NSCopying, UNSAttachmentDataProvider> {
    NSURL * _fileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)dataClassForFamily:(unsigned long long)arg1;
+ (id)dataForFamily:(unsigned long long)arg1 fromFileURL:(id)arg2 error:(id*)arg3;
+ (id)dataFromFileURL:(id)arg1;
+ (bool)isFileAtURL:(id)arg1 validForFamily:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)isFileValid:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)fileURL;
- (unsigned long long)hash;
- (id)initWithFileURL:(id)arg1;
- (bool)isEqual:(id)arg1;

@end