/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MediaPlayer/NSCopying.h>

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying> {

	SCD_Struct_MP26* _persistentIDs;
	char _shouldContain;
	SCD_Struct_MP23 _has;

}

@property (assign,nonatomic) char hasShouldContain; 
@property (assign,nonatomic) char shouldContain;                         //@synthesize shouldContain=_shouldContain - In the implementation block
@property (nonatomic,readonly) unsigned persistentIDsCount; 
@property (nonatomic,readonly) long long* persistentIDs; 
-(unsigned)persistentIDsCount;
-(long long*)persistentIDs;
-(void)setShouldContain:(char)arg1 ;
-(void)addPersistentIDs:(long long)arg1 ;
-(char)hasShouldContain;
-(void)clearPersistentIDs;
-(long long)persistentIDsAtIndex:(unsigned)arg1 ;
-(void)setHasShouldContain:(char)arg1 ;
-(void)setPersistentIDs:(long long*)arg1 count:(unsigned)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)shouldContain;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

