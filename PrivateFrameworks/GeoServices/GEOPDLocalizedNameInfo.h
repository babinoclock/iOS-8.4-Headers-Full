/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, GEONameInfo;

@interface GEOPDLocalizedNameInfo : PBCodable <NSCopying> {

	NSString* _languageCode;
	GEONameInfo* _name;
	NSString* _requestedLanguageCode;

}

@property (nonatomic,readonly) char hasRequestedLanguageCode; 
@property (nonatomic,retain) NSString * requestedLanguageCode;              //@synthesize requestedLanguageCode=_requestedLanguageCode - In the implementation block
@property (nonatomic,readonly) char hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                       //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) GEONameInfo * name;                            //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(GEONameInfo *)arg1 ;
-(GEONameInfo *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(char)hasLanguageCode;
-(void)setRequestedLanguageCode:(NSString *)arg1 ;
-(char)hasRequestedLanguageCode;
-(NSString *)requestedLanguageCode;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
@end

