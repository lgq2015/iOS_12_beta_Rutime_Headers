/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSTempFileManager : NSObject {
    NSHashTable * _registry;
}

@property (nonatomic, readonly) NSHashTable *registry;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)registry;
- (id)writeTemporaryFileWithData:(id)arg1 type:(id)arg2;

@end
