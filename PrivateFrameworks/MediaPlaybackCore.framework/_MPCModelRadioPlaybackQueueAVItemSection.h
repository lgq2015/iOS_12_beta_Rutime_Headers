/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCModelRadioPlaybackQueueAVItemSection : NSObject <_MPCModelRadioPlaybackQueueSection> {
    MPAVItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfItems;
@property (readonly) Class superclass;

+ (id)placeholderSectionWithStationName:(id)arg1;
+ (id)sectionWithAVItem:(id)arg1;

- (void).cxx_destruct;
- (id)AVItemAtIndex:(long long)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (bool)isExplicitItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (long long)removeExplicitItems;
- (id)trackForItemAtIndex:(long long)arg1;

@end
