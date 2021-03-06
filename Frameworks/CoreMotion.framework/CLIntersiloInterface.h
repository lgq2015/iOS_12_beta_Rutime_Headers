/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloInterface : NSObject {
    Protocol * _protocol;
    struct map<SEL *, CLIntersiloInterfaceSelectorInfo *, std::__1::less<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, CLIntersiloInterfaceSelectorInfo *> > > { 
        struct __tree<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::__map_value_compare<SEL *, std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::less<SEL *>, true>, std::__1::allocator<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<SEL *, std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::less<SEL *>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _selectors;
}

@property (nonatomic, readonly) Protocol *protocol;

+ (id)interfaceWithProtocol:(id)arg1 bases:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)conformsToProtocol:(id)arg1;
- (id)debugDescription;
- (void)extendSelectorInfoWithProtocol:(id)arg1 bases:(id)arg2;
- (id)getInfoForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1 bases:(id)arg2;
- (id)protocol;

@end
