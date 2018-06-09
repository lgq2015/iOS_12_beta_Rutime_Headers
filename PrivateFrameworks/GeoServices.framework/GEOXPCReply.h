/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOXPCReply : NSObject <NSSecureCoding> {
    NSError * _error;
    unsigned char  _flags;
    NSObject<OS_xpc_object> * _object;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) unsigned char flags;
@property (nonatomic, retain) NSObject<OS_xpc_object> *object;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *replyDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned char)flags;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)object;
- (id)replyDictionary;
- (void)send;
- (void)setError:(id)arg1;
- (void)setObject:(id)arg1;

@end