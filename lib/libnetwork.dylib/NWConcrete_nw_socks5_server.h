/* made by EzioChiu
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWConcrete_nw_socks5_server : NSObject <OS_nw_socks5_server> {
    NSObject<OS_dispatch_queue> * ss_client_queue;
    id /* block */  ss_error;
    unsigned long long  ss_id;
    NWConcrete_nw_socks5_server * ss_internally_retained_object;
    NSObject<OS_nw_listener> * ss_listener;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  ss_lock;
    NSObject<OS_nw_parameters> * ss_parameters;
    NSObject<OS_dispatch_queue> * ss_queue;
    unsigned int  ss_shoes;
    NSObject<OS_nw_array> * ss_socks5_connections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithParameters:(id)arg1 clientQueue:(id)arg2;

@end