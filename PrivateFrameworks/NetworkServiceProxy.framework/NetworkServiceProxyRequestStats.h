/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NetworkServiceProxyRequestStats : NSObject <NSSecureCoding> {
    unsigned int  _direct_connection_count;
    unsigned int  _direct_connection_failed_count;
    NetworkServiceProxyRespTimeBuckets * _direct_first_byte_buckets;
    NetworkServiceProxyRespTimeBuckets * _direct_last_byte_buckets;
    NetworkServiceProxyRespTimeBuckets * _first_byte_buckets;
    long long  _interface_type;
    NetworkServiceProxyRespTimeBuckets * _last_byte_buckets;
    long long  _protocol_type;
    unsigned int  _request_count;
    unsigned int  _request_failed_count;
    int  _service_type;
    NetworkServiceProxyRespTimeBuckets * _udp_rtt_buckets;
}

@property unsigned int direct_connection_count;
@property unsigned int direct_connection_failed_count;
@property (retain) NetworkServiceProxyRespTimeBuckets *direct_first_byte_buckets;
@property (retain) NetworkServiceProxyRespTimeBuckets *direct_last_byte_buckets;
@property (retain) NetworkServiceProxyRespTimeBuckets *first_byte_buckets;
@property long long interface_type;
@property (retain) NetworkServiceProxyRespTimeBuckets *last_byte_buckets;
@property long long protocol_type;
@property unsigned int request_count;
@property unsigned int request_failed_count;
@property int service_type;
@property (retain) NetworkServiceProxyRespTimeBuckets *udp_rtt_buckets;

+ (int)serviceTypeForSigningIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addStats:(id)arg1;
- (void)clear;
- (unsigned int)direct_connection_count;
- (unsigned int)direct_connection_failed_count;
- (id)direct_first_byte_buckets;
- (id)direct_last_byte_buckets;
- (void)encodeWithCoder:(id)arg1;
- (id)first_byte_buckets;
- (id)getAWDMetric;
- (id)getServiceName;
- (id)initWithCoder:(id)arg1;
- (long long)interface_type;
- (id)last_byte_buckets;
- (long long)protocol_type;
- (unsigned int)request_count;
- (unsigned int)request_failed_count;
- (int)service_type;
- (void)setDirect_connection_count:(unsigned int)arg1;
- (void)setDirect_connection_failed_count:(unsigned int)arg1;
- (void)setDirect_first_byte_buckets:(id)arg1;
- (void)setDirect_last_byte_buckets:(id)arg1;
- (void)setFirst_byte_buckets:(id)arg1;
- (void)setInterface_type:(long long)arg1;
- (void)setLast_byte_buckets:(id)arg1;
- (void)setProtocol_type:(long long)arg1;
- (void)setRequest_count:(unsigned int)arg1;
- (void)setRequest_failed_count:(unsigned int)arg1;
- (void)setService_type:(int)arg1;
- (void)setUdp_rtt_buckets:(id)arg1;
- (id)udp_rtt_buckets;

@end