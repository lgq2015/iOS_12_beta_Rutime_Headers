/* made by EzioChiu.
 */

@protocol SFAirport <NSObject>

@required

- (NSString *)city;
- (NSString *)code;
- (NSString *)country;
- (NSString *)countryCode;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)district;
- (NSData *)jsonData;
- (SFLatLng *)location;
- (NSString *)name;
- (NSString *)postalCode;
- (void)setCity:(NSString *)arg1;
- (void)setCode:(NSString *)arg1;
- (void)setCountry:(NSString *)arg1;
- (void)setCountryCode:(NSString *)arg1;
- (void)setDistrict:(NSString *)arg1;
- (void)setLocation:(SFLatLng *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setPostalCode:(NSString *)arg1;
- (void)setState:(NSString *)arg1;
- (void)setStreet:(NSString *)arg1;
- (void)setTimezone:(NSTimeZone *)arg1;
- (NSString *)state;
- (NSString *)street;
- (NSTimeZone *)timezone;

@end