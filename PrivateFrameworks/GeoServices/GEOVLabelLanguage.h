/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOVLabelLanguage : PBCodable <NSCopying> {

	unsigned _endOffset;
	NSString* _languageLocale;
	unsigned _startOffset;

}

@property (assign,nonatomic) unsigned startOffset;                   //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) unsigned endOffset;                     //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,retain) NSString * languageLocale;              //@synthesize languageLocale=_languageLocale - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)endOffset;
-(unsigned)startOffset;
-(id)dictionaryRepresentation;
-(void)setStartOffset:(unsigned)arg1 ;
-(void)setEndOffset:(unsigned)arg1 ;
-(void)setLanguageLocale:(NSString *)arg1 ;
-(NSString *)languageLocale;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
