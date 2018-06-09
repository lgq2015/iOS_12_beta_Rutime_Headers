/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

@interface NWStatisticsSource : NSObject {
    unsigned long long  _countsSeqno;
    <NWStatisticsSourceDelegate> * _delegate;
    unsigned long long  _descriptorSeqno;
    unsigned int  _filter;
    struct nstat_counts { 
        unsigned long long nstat_rxpackets; 
        unsigned long long nstat_rxbytes; 
        unsigned long long nstat_txpackets; 
        unsigned long long nstat_txbytes; 
        unsigned long long nstat_cell_rxbytes; 
        unsigned long long nstat_cell_txbytes; 
        unsigned long long nstat_wifi_rxbytes; 
        unsigned long long nstat_wifi_txbytes; 
        unsigned long long nstat_wired_rxbytes; 
        unsigned long long nstat_wired_txbytes; 
        unsigned int nstat_rxduplicatebytes; 
        unsigned int nstat_rxoutoforderbytes; 
        unsigned int nstat_txretransmit; 
        unsigned int nstat_connectattempts; 
        unsigned int nstat_connectsuccesses; 
        unsigned int nstat_min_rtt; 
        unsigned int nstat_avg_rtt; 
        unsigned int nstat_var_rtt; 
    }  _last_counts;
    NWStatisticsManager * _manager;
    unsigned int  _provider;
    unsigned long long  _reference;
    bool  _removing;
}

@property (readonly) const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*_nstat_counts;
@property unsigned long long countsSeqno;
@property (retain) <NWStatisticsSourceDelegate> *delegate;
@property unsigned long long descriptorSeqno;
@property (readonly) NWStatisticsManager *manager;
@property (readonly) unsigned int provider;
@property unsigned long long reference;
@property bool removing;
@property (readonly) unsigned long long snapshotRevision;
@property (readonly) unsigned long long sourceIdentifier;

+ (id)createSourceForProvider:(unsigned int)arg1 srcRef:(unsigned long long)arg2 manager:(id)arg3;

- (void).cxx_destruct;
- (id)_currentSnapshot;
- (bool)_handleDescriptor:(void*)arg1 length:(unsigned long long)arg2;
- (const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*)_nstat_counts;
- (unsigned long long)countsSeqno;
- (id)currentSnapshot;
- (id)delegate;
- (unsigned long long)descriptorSeqno;
- (bool)handleCounts:(const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*)arg1;
- (int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2;
- (bool)handleMessage:(struct nstat_msg_hdr { unsigned long long x1; unsigned int x2; unsigned short x3; unsigned short x4; }*)arg1 length:(long long)arg2;
- (id)init;
- (id)initWithManager:(id)arg1 source:(unsigned long long)arg2 provider:(unsigned int)arg3;
- (id)manager;
- (unsigned int)provider;
- (void)queryCounts;
- (void)queryDescription;
- (void)queryUpdate;
- (unsigned long long)reference;
- (bool)removing;
- (void)setCountsSeqno:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptorSeqno:(unsigned long long)arg1;
- (void)setReference:(unsigned long long)arg1;
- (void)setRemoving:(bool)arg1;
- (unsigned long long)snapshotRevision;
- (unsigned long long)sourceIdentifier;

@end