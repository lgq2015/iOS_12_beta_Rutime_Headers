/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWMessageConnection : NWConnection

- (void)readMessageWithCompletionHandler:(id /* block */)arg1;
- (void)writeMessage:(id)arg1 completionHandler:(id /* block */)arg2;

@end