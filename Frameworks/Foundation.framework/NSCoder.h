/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCoder : NSObject <MTCoder>

@property (readonly) unsigned long long hmd_homeManagerOptions;
@property (readonly) HMFMessage *hmd_message;
@property (getter=isXPCTransport, readonly) bool xpcTransport;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)__categorizeException:(id)arg1 intoError:(id*)arg2;

- (bool)__failWithException:(id)arg1;
- (bool)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3;
- (void)__failWithExternalError:(id)arg1;
- (void)__setError:(id)arg1;
- (id)__tryDecodeObjectForKey:(id)arg1 error:(id*)arg2 decodeBlock:(id /* block */)arg3;
- (bool)_allowsValueCoding;
- (bool)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(bool)arg3;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (id)decodeDataObject;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (long long)decodeLongForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (struct CGPoint { double x1; double x2; })decodePoint;
- (struct CGPoint { double x1; double x2; })decodePointForKey:(id)arg1;
- (id)decodePropertyListForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeSize;
- (struct CGSize { double x1; double x2; })decodeSizeForKey:(id)arg1;
- (id)decodeTopLevelObjectAndReturnError:(id*)arg1;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2 size:(unsigned long long)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (long long)decodingFailurePolicy;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void*)arg3;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeLong:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)encodePoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)encodeSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)error;
- (void)failWithError:(id)arg1;
- (struct _NSZone { }*)objectZone;
- (bool)requiresSecureCoding;
- (void)setAllowedClasses:(id)arg1;
- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (unsigned int)systemVersion;
- (bool)validateAllowedClass:(Class)arg1 forKey:(id)arg2;
- (bool)validateClassSupportsSecureCoding:(Class)arg1;
- (long long)versionForClassName:(id)arg1;

// Image: /System/Library/Frameworks/ARKit.framework/ARKit

- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })decodeCMRotationMatrixForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })decodeMatrix3x3ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })decodeMatrix4x3ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })decodeMatrix4x4ForKey:(id)arg1;
- (void)decodeVector3ForKey:(id)arg1;
- (void)encodeCMRotationMatrix:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1 forKey:(id)arg2;
- (void)encodeMatrix3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 forKey:(id)arg2;
- (void)encodeMatrix4x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)encodeMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)encodeVector3:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

- (struct { long long x1; int x2; unsigned int x3; long long x4; })decodeCMTimeForKey:(id)arg1;
- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })decodeCMTimeMappingForKey:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })decodeCMTimeRangeForKey:(id)arg1;
- (void)encodeCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

- (id)ls_decodeArrayWithValuesOfClass:(Class)arg1 forKey:(id)arg2;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClass:(Class)arg2 forKey:(id)arg3;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClasses:(id)arg2 forKey:(id)arg3;
- (id)ls_decodeSetWithValuesOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)decodeArrayOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (id)decodeSetOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (void)encodeArrayOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeSetOfConditionalObjects:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (id)_ph_sandboxExtensionTokenKeyForURLKey:(id)arg1;
- (id)ph_decodeSandboxedURLForKey:(id)arg1 sandboxExtensionWrapper:(id*)arg2;
- (void)ph_encodeSandboxedURL:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)CA_supportedClasses;

- (bool)CA_decodeCGFloatArray:(double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (id)CA_decodeObjectForKey:(id)arg1;
- (void)CA_encodeCGFloatArray:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(bool)arg3;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })un_decodeCGRectForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })un_decodeCMTimeForKey:(id)arg1;
- (void)un_encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)un_encodeCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })vn_decode3x3MatrixForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })vn_decode4x4MatrixForKey:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })vn_decodeCGAffineTransformForKey:(id)arg1;
- (unsigned int)vn_decodeCodingVersionForKey:(id)arg1;
- (void)vn_encode3x3Matrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 forKey:(id)arg2;
- (void)vn_encode4x4Matrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)vn_encodeCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forKey:(id)arg2;
- (void)vn_encodeCodingVersion:(unsigned int)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities

- (struct CGPoint { double x1; double x2; })axmDecodePointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axmDecodeRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })axmDecodeSizeForKey:(id)arg1;
- (void)axmEncodePoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)axmEncodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)axmEncodeSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (id)akDecodeColorForKey:(id)arg1;
- (id)akDecodeImageForKey:(id)arg1;
- (void)akEncodeColor:(id)arg1 forKey:(id)arg2;
- (void)akEncodeImage:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

- (id)_bcs_strictlyDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI

- (unsigned long long)decodeTheme;
- (unsigned long long)decodeThemeForKey:(id)arg1;
- (void)encodeTheme:(unsigned long long)arg1;
- (void)encodeTheme:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (double)geo_decodeGEOMachAbsoluteTimeForKey:(id)arg1;
- (void)geo_encodeGEOMachAbsoluteTime:(double)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)applicationBundleIdentifier;
- (id)decodeArrayOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (id)decodeSetOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (void)encodeArrayOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeSetOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (unsigned long long)hmd_homeManagerOptions;
- (id)hmd_message;
- (bool)isAuthorizedForLocationAccess;
- (bool)isEntitledForSPIAccess;
- (bool)isForNonAdminSharedUser;
- (bool)isLocalStore;
- (bool)isRemoteGatewayCoder;
- (bool)isRemoteTransport;
- (bool)isRemoteTransportOnSameAccount;
- (bool)isRemoteUserAdministrator;
- (bool)isXPCTransport;
- (id)supportedFeatures;
- (id)user;

// Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation

- (void)_lp_encodeArrayIfNotEmpty:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeDictionaryOfObjectsWithKeysOfClass:(Class)arg1 andObjectsOfClass:(Class)arg2 forKey:(id)arg3;
- (id)_lp_strictlyDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (bool)mt_isReadingFromPersistence;
- (bool)mt_isWritingToPersistence;
- (bool)mt_isWritingToStorage;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

- (void)decodeObjectsForKeys:(id)arg1 forObject:(id)arg2;
- (void)encodeObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)encodeObjectsForKeys:(id)arg1 forObject:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { double x1; double x2; })decodeCGVectorForKey:(id)arg1;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { double x1; double x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (id)prs_URLForKey:(id)arg1;
- (id)prs_arrayForKey:(id)arg1;
- (bool)prs_boolForKey:(id)arg1;
- (id)prs_dataForKey:(id)arg1;
- (id)prs_dateForKey:(id)arg1;
- (id)prs_dictionaryForKey:(id)arg1;
- (double)prs_doubleForKey:(id)arg1;
- (float)prs_floatForKey:(id)arg1;
- (int)prs_intForKey:(id)arg1;
- (long long)prs_integerForKey:(id)arg1;
- (id)prs_numberForKey:(id)arg1;
- (id)prs_stringForKey:(id)arg1;
- (double)prs_timestampForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)_ui_isInterprocess;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })decodeCGAffineTransformForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { double x1; double x2; })decodeCGVectorForKey:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })decodeDirectionalEdgeInsetsForKey:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })decodeUIEdgeInsetsForKey:(id)arg1;
- (struct UIOffset { double x1; double x2; })decodeUIOffsetForKey:(id)arg1;
- (void)encodeCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2;
- (void)encodeUIOffset:(struct UIOffset { double x1; double x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)safeEncodeUIColor:(id)arg1 forKey:(id)arg2;

@end