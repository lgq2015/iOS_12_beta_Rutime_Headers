/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKServerRoute : NSObject {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly, copy) NSString *HTTPMethod;
@property (nonatomic, readonly, copy) NSString *endpointURLString;
@property (nonatomic, readonly) bool requiresMescal;

- (void).cxx_destruct;
- (id)HTTPMethod;
- (id)description;
- (id)endpointURLString;
- (id)initWithDictionary:(id)arg1;
- (bool)requiresMescal;

@end