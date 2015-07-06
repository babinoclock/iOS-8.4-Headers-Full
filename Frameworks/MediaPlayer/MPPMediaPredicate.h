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

@class MPPCompoundPredicate, MPPConditionalPredicate, MPPPersistentIDsPredicate, MPPPropertyPredicate, MPPSearchStringPredicate;

@interface MPPMediaPredicate : PBCodable <NSCopying> {

	MPPCompoundPredicate* _compoundPredicate;
	MPPConditionalPredicate* _conditionalPredicate;
	MPPPersistentIDsPredicate* _persistentIDsPredicate;
	MPPPropertyPredicate* _propertyPredicate;
	MPPSearchStringPredicate* _searchStringPredicate;
	int _type;
	SCD_Struct_MP23 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasPropertyPredicate; 
@property (nonatomic,retain) MPPPropertyPredicate * propertyPredicate;                        //@synthesize propertyPredicate=_propertyPredicate - In the implementation block
@property (nonatomic,readonly) char hasCompoundPredicate; 
@property (nonatomic,retain) MPPCompoundPredicate * compoundPredicate;                        //@synthesize compoundPredicate=_compoundPredicate - In the implementation block
@property (nonatomic,readonly) char hasConditionalPredicate; 
@property (nonatomic,retain) MPPConditionalPredicate * conditionalPredicate;                  //@synthesize conditionalPredicate=_conditionalPredicate - In the implementation block
@property (nonatomic,readonly) char hasPersistentIDsPredicate; 
@property (nonatomic,retain) MPPPersistentIDsPredicate * persistentIDsPredicate;              //@synthesize persistentIDsPredicate=_persistentIDsPredicate - In the implementation block
@property (nonatomic,readonly) char hasSearchStringPredicate; 
@property (nonatomic,retain) MPPSearchStringPredicate * searchStringPredicate;                //@synthesize searchStringPredicate=_searchStringPredicate - In the implementation block
-(MPPPropertyPredicate *)propertyPredicate;
-(void)setPropertyPredicate:(MPPPropertyPredicate *)arg1 ;
-(MPPConditionalPredicate *)conditionalPredicate;
-(char)hasConditionalPredicate;
-(void)setConditionalPredicate:(MPPConditionalPredicate *)arg1 ;
-(MPPCompoundPredicate *)compoundPredicate;
-(void)setCompoundPredicate:(MPPCompoundPredicate *)arg1 ;
-(MPPPersistentIDsPredicate *)persistentIDsPredicate;
-(void)setPersistentIDsPredicate:(MPPPersistentIDsPredicate *)arg1 ;
-(MPPSearchStringPredicate *)searchStringPredicate;
-(void)setSearchStringPredicate:(MPPSearchStringPredicate *)arg1 ;
-(char)hasPropertyPredicate;
-(char)hasCompoundPredicate;
-(char)hasPersistentIDsPredicate;
-(char)hasSearchStringPredicate;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

