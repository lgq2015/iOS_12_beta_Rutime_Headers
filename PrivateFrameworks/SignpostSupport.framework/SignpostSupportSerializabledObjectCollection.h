/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportSerializabledObjectCollection : NSObject {
    NSNumber * _formatVersion;
    unsigned long long  _machContinuousTimeFirst;
    unsigned long long  _machContinuousTimeLast;
    NSArray * _objectArray;
}

@property (nonatomic, readonly) NSNumber *formatVersion;
@property (nonatomic, readonly) unsigned long long machContinuousTimeFirst;
@property (nonatomic, readonly) unsigned long long machContinuousTimeLast;
@property (nonatomic, readonly) NSArray *objectArray;

+ (id)_deserializedDictionaryForData:(id)arg1 errorOut:(id*)arg2;
+ (bool)_enumerateSignpostObjectsInDeserializedCollectionDictionary:(id)arg1 processingBlock:(id /* block */)arg2 errorOut:(id*)arg3;
+ (bool)_versionIsSupported:(id)arg1;
+ (bool)enumerateSignpostSupportObjectsInSerializedCollection:(id)arg1 processingBlock:(id /* block */)arg2 errorOut:(id*)arg3;
+ (bool)timeRangeForSerializedCollection:(id)arg1 continuousTimeFirstOut:(unsigned long long*)arg2 continuousTimeLastOut:(unsigned long long*)arg3 errorOut:(id*)arg4;

- (void).cxx_destruct;
- (id)formatVersion;
- (id)initWithData:(id)arg1 errorOut:(id*)arg2;
- (id)initWithSerializeableObjectArray:(id)arg1;
- (unsigned long long)machContinuousTimeFirst;
- (unsigned long long)machContinuousTimeLast;
- (id)newSerializedCollection;
- (id)objectArray;

@end