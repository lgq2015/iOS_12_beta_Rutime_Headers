/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIGLResourceManager : CLKUIResourceManager {
    EAGLContext * _context;
    NSMutableDictionary * _programsByName;
    EAGLSharegroup * _shareGroup;
}

+ (id)programWithName:(id)arg1;
+ (id)shareGroup;
+ (id)sharedGLInstance;

- (void).cxx_destruct;
- (id)_newAtlasForUuid:(id)arg1;
- (void)_purgeAtlases:(id)arg1;
- (id)init;

@end
