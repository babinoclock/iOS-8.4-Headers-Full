/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKObject.h>
#import <PassKitCore/NSCopying.h>
#import <PassKitCore/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary, NSURL, NSNumber, NSSet, PKImage, PKPaymentPass, UIImage, PKPassDisplayProfile, PKBarcode, NSArray;

@interface PKPass : PKObject <NSCopying, NSSecureCoding> {

	char _voided;
	char _revoked;
	unsigned _passType;
	NSString* _serialNumber;
	NSString* _passTypeIdentifier;
	NSString* _organizationName;
	NSDate* _relevantDate;
	NSDictionary* _userInfo;
	NSURL* _passURL;
	NSNumber* _sequenceCounter;
	NSString* _teamID;
	NSDate* _expirationDate;
	NSString* _groupingID;
	NSSet* _embeddedLocations;
	NSSet* _embeddedBeacons;
	NSURL* _webLocationsURL;
	NSURL* _localLocationsURL;
	int _sharingMethod;
	NSURL* _sharingURL;
	NSString* _sharingText;
	NSString* _iAdReportingIdentifier;
	PKImage* _partialFrontFaceImagePlaceholder;
	NSDate* _ingestedDate;
	NSDate* _modifiedDate;

}

@property (assign,nonatomic) unsigned passType;                                                              //@synthesize passType=_passType - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,copy) NSString * serialNumber;                                                          //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * passTypeIdentifier;                                                    //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * webServiceURL; 
@property (nonatomic,copy) NSString * authenticationToken; 
@property (nonatomic,copy,readonly) UIImage * icon; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,copy) NSString * organizationName;                                                      //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,copy) NSDate * relevantDate;                                                            //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSURL * passURL;                                                                  //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,copy) NSNumber * sequenceCounter;                                                       //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,copy) NSString * teamID;                                                                //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                                          //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,getter=isVoided,nonatomic) char voided;                                                    //@synthesize voided=_voided - In the implementation block
@property (nonatomic,copy) NSString * groupingID;                                                            //@synthesize groupingID=_groupingID - In the implementation block
@property (nonatomic,copy) NSSet * embeddedLocations;                                                        //@synthesize embeddedLocations=_embeddedLocations - In the implementation block
@property (nonatomic,copy) NSSet * embeddedBeacons;                                                          //@synthesize embeddedBeacons=_embeddedBeacons - In the implementation block
@property (nonatomic,copy) NSURL * webLocationsURL;                                                          //@synthesize webLocationsURL=_webLocationsURL - In the implementation block
@property (nonatomic,copy) NSURL * localLocationsURL;                                                        //@synthesize localLocationsURL=_localLocationsURL - In the implementation block
@property (nonatomic,copy) PKPassDisplayProfile * displayProfile; 
@property (nonatomic,readonly) int style; 
@property (nonatomic,readonly) NSString * pluralLocalizedName; 
@property (nonatomic,readonly) NSString * lowercaseLocalizedName; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (assign,nonatomic) int sharingMethod;                                                              //@synthesize sharingMethod=_sharingMethod - In the implementation block
@property (nonatomic,copy) NSURL * sharingURL;                                                               //@synthesize sharingURL=_sharingURL - In the implementation block
@property (nonatomic,copy) NSString * sharingText;                                                           //@synthesize sharingText=_sharingText - In the implementation block
@property (setter=setiAdReportingIdentifier:,nonatomic,copy) NSString * iAdReportingIdentifier;              //@synthesize iAdReportingIdentifier=_iAdReportingIdentifier - In the implementation block
@property (nonatomic,readonly) PKBarcode * barcode; 
@property (nonatomic,readonly) PKImage * footerImage; 
@property (nonatomic,readonly) NSString * logoText; 
@property (nonatomic,readonly) int transitType; 
@property (nonatomic,readonly) NSArray * frontFieldBuckets; 
@property (nonatomic,readonly) NSArray * backFieldBuckets; 
@property (nonatomic,readonly) PKImage * iconImage; 
@property (nonatomic,readonly) PKImage * frontFaceImage; 
@property (nonatomic,readonly) PKImage * partialFrontFaceImage; 
@property (nonatomic,readonly) PKImage * partialFrontFaceImagePlaceholder;                                   //@synthesize partialFrontFaceImagePlaceholder=_partialFrontFaceImagePlaceholder - In the implementation block
@property (nonatomic,readonly) PKImage * backFaceImage; 
@property (nonatomic,readonly) CGRect logoRect; 
@property (nonatomic,readonly) CGRect thumbnailRect; 
@property (nonatomic,readonly) CGRect stripRect; 
@property (nonatomic,readonly) NSArray * storeIdentifiers; 
@property (nonatomic,readonly) NSURL * appLaunchURL; 
@property (nonatomic,retain) NSDate * ingestedDate;                                                          //@synthesize ingestedDate=_ingestedDate - In the implementation block
@property (nonatomic,retain) NSDate * modifiedDate;                                                          //@synthesize modifiedDate=_modifiedDate - In the implementation block
@property (assign,getter=isRevoked,nonatomic) char revoked;                                                  //@synthesize revoked=_revoked - In the implementation block
+(char)supportsSecureCoding;
+(char)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3 ;
-(UIImage *)icon;
-(id)mailAttachmentIcon;
-(void)setOrganizationName:(NSString *)arg1 ;
-(char)isRevoked;
-(unsigned)passType;
-(NSString *)teamID;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(NSDictionary *)userInfo;
-(id)backgroundImage;
-(NSString *)localizedName;
-(NSString *)localizedDescription;
-(PKImage *)iconImage;
-(NSString *)organizationName;
-(char)isExpired;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(void)setPassURL:(NSURL *)arg1 ;
-(NSArray *)storeIdentifiers;
-(void)downloadRemoteAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(void)setSequenceCounter:(NSNumber *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(void)setVoided:(char)arg1 ;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(void)setEmbeddedLocations:(NSSet *)arg1 ;
-(void)setEmbeddedBeacons:(NSSet *)arg1 ;
-(void)setSharingMethod:(int)arg1 ;
-(int)sharingMethod;
-(void)setSharingURL:(NSURL *)arg1 ;
-(void)setSharingText:(NSString *)arg1 ;
-(void)setiAdReportingIdentifier:(id)arg1 ;
-(void)setPassType:(unsigned)arg1 ;
-(id)_groupingIDFromPassDictionary:(id)arg1 ;
-(void)setGroupingID:(NSString *)arg1 ;
-(NSDate *)relevantDate;
-(char)hasLocationRelevancyInfo;
-(NSSet *)embeddedLocations;
-(NSSet *)embeddedBeacons;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(id)_changeMessageForFieldKey:(id)arg1 ;
-(id)_localizationKeyForMultipleDiff;
-(PKBarcode *)barcode;
-(PKImage *)footerImage;
-(NSString *)logoText;
-(int)transitType;
-(NSURL *)appLaunchURL;
-(CGRect)thumbnailRect;
-(CGRect)stripRect;
-(id)stripImage;
-(CGRect)logoRect;
-(NSDate *)ingestedDate;
-(NSDate *)modifiedDate;
-(void)setIngestedDate:(NSDate *)arg1 ;
-(void)setModifiedDate:(NSDate *)arg1 ;
-(void)setRevoked:(char)arg1 ;
-(NSNumber *)sequenceCounter;
-(char)isVoided;
-(NSString *)groupingID;
-(NSString *)sharingText;
-(NSURL *)sharingURL;
-(NSString *)iAdReportingIdentifier;
-(NSString *)lowercaseLocalizedName;
-(NSString *)pluralLocalizedName;
-(PKPaymentPass *)paymentPass;
-(char)hasTimeOrLocationRelevancyInfo;
-(char)isUpdatable;
-(char)supportsSharing;
-(id)localizedValueForFieldKey:(id)arg1 ;
-(id)localizedDescriptionForDiff:(id)arg1 ;
-(NSURL *)localLocationsURL;
-(id)diff:(id)arg1 ;
-(PKImage *)frontFaceImage;
-(PKImage *)partialFrontFaceImage;
-(PKImage *)backFaceImage;
-(char)isEqualToPassIncludingMetadata:(id)arg1 ;
-(NSURL *)webLocationsURL;
-(void)setWebLocationsURL:(NSURL *)arg1 ;
-(void)setLocalLocationsURL:(NSURL *)arg1 ;
-(PKImage *)partialFrontFaceImagePlaceholder;
-(NSDate *)expirationDate;
-(NSURL *)passURL;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)logoImage;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)passTypeIdentifier;
@end

