/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying> {

	NSMutableArray* _announcements;
	NSString* _languageCode;

}

@property (nonatomic,retain) NSMutableArray * announcements;              //@synthesize announcements=_announcements - In the implementation block
@property (nonatomic,readonly) char hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                     //@synthesize languageCode=_languageCode - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(char)hasLanguageCode;
-(void)setAnnouncements:(NSMutableArray *)arg1 ;
-(void)addAnnouncement:(id)arg1 ;
-(unsigned)announcementsCount;
-(void)clearAnnouncements;
-(id)announcementAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)announcements;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

