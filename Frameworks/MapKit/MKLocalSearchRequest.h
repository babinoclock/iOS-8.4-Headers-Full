/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/NSCopying.h>

@protocol GEOCompletionItem;
@class NSString, CLLocation, _MKLocalSearchMerchantParameters, NSArray;

@interface MKLocalSearchRequest : NSObject <NSCopying> {

	NSString* _naturalLanguageQuery;
	char _hasRegion;
	SCD_Struct_MK2 _region;
	char _allowPhoneNumberLookupUsingCellular;
	id<GEOCompletionItem> _geoCompletionItem;
	CLLocation* _deviceLocation;
	_MKLocalSearchMerchantParameters* _merchantParameters;
	NSArray* _phoneNumbers;
	NSArray* _muids;
	int _resultProviderID;
	NSString* _contactsDataString;
	NSString* _canonicalSearchString;

}

@property (nonatomic,copy) NSString * naturalLanguageQuery;                                                                                                                     //@synthesize naturalLanguageQuery=_naturalLanguageQuery - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 region;                                                                                                                             //@synthesize region=_region - In the implementation block
@property (setter=_setDeviceLocation:,getter=_deviceLocation,nonatomic,retain) CLLocation * deviceLocation;                                                                     //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (setter=_setMerchantParameters:,getter=_merchantParameters,nonatomic,retain) _MKLocalSearchMerchantParameters * merchantParameters;                                   //@synthesize merchantParameters=_merchantParameters - In the implementation block
@property (setter=_setPhoneNumbers:,getter=_phoneNumbers,nonatomic,retain) NSArray * phoneNumbers;                                                                              //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (assign,setter=_setAllowPhoneNumberLookupUsingCellular:,getter=_allowPhoneNumberLookupUsingCellular,nonatomic) char allowPhoneNumberLookupUsingCellular;              //@synthesize allowPhoneNumberLookupUsingCellular=_allowPhoneNumberLookupUsingCellular - In the implementation block
@property (setter=_setMuids:,getter=_muids,nonatomic,retain) NSArray * muids;                                                                                                   //@synthesize muids=_muids - In the implementation block
@property (assign,setter=_setResultProviderID:,getter=_resultProviderID,nonatomic) int resultProviderID;                                                                        //@synthesize resultProviderID=_resultProviderID - In the implementation block
@property (setter=_setContactsDataString:,getter=_contactsDataString,nonatomic,retain) NSString * contactsDataString;                                                           //@synthesize contactsDataString=_contactsDataString - In the implementation block
@property (setter=_setCanonicalSearchString:,getter=_canonicalSearchString,nonatomic,retain) NSString * canonicalSearchString;                                                  //@synthesize canonicalSearchString=_canonicalSearchString - In the implementation block
@property (nonatomic,readonly) char _hasRegion;                                                                                                                                 //@synthesize hasRegion=_hasRegion - In the implementation block
@property (nonatomic,readonly) id<GEOCompletionItem> geoCompletionItem;                                                                                                         //@synthesize geoCompletionItem=_geoCompletionItem - In the implementation block
+(id)searchRequestWithCompletion:(id)arg1 ;
-(void)_setContactsDataString:(id)arg1 ;
-(id<GEOCompletionItem>)geoCompletionItem;
-(id)_deviceLocation;
-(id)_merchantParameters;
-(id)_phoneNumbers;
-(char)_allowPhoneNumberLookupUsingCellular;
-(id)_muids;
-(char)_hasRegion;
-(id)_canonicalSearchString;
-(NSString *)naturalLanguageQuery;
-(void)setNaturalLanguageQuery:(NSString *)arg1 ;
-(void)_setDeviceLocation:(id)arg1 ;
-(void)_setMerchantParameters:(id)arg1 ;
-(void)_setPhoneNumbers:(id)arg1 ;
-(void)_setMuids:(id)arg1 ;
-(void)_setResultProviderID:(int)arg1 ;
-(id)_contactsDataString;
-(void)_setCanonicalSearchString:(id)arg1 ;
-(void)_setAllowPhoneNumberLookupUsingCellular:(char)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRegion:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)region;
-(id)initWithCompletion:(id)arg1 ;
-(int)_resultProviderID;
-(id)_dictionaryRepresentation;
@end

