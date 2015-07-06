/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libAWDSupportFramework.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitConfiguration : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _databaseSize;
	NSString* _guid;
	unsigned _numAccessories;
	unsigned _numAccessoryServiceGroups;
	unsigned _numHomes;
	unsigned _numLocationGroups;
	unsigned _numLocations;
	unsigned _numScenes;
	unsigned _numServices;
	unsigned _numTriggers;
	unsigned _numUsers;
	SCD_Struct_AW19 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                                 //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasNumHomes; 
@property (assign,nonatomic) unsigned numHomes;                               //@synthesize numHomes=_numHomes - In the implementation block
@property (assign,nonatomic) char hasNumAccessories; 
@property (assign,nonatomic) unsigned numAccessories;                         //@synthesize numAccessories=_numAccessories - In the implementation block
@property (assign,nonatomic) char hasNumServices; 
@property (assign,nonatomic) unsigned numServices;                            //@synthesize numServices=_numServices - In the implementation block
@property (assign,nonatomic) char hasNumUsers; 
@property (assign,nonatomic) unsigned numUsers;                               //@synthesize numUsers=_numUsers - In the implementation block
@property (assign,nonatomic) char hasNumScenes; 
@property (assign,nonatomic) unsigned numScenes;                              //@synthesize numScenes=_numScenes - In the implementation block
@property (assign,nonatomic) char hasNumTriggers; 
@property (assign,nonatomic) unsigned numTriggers;                            //@synthesize numTriggers=_numTriggers - In the implementation block
@property (assign,nonatomic) char hasNumLocations; 
@property (assign,nonatomic) unsigned numLocations;                           //@synthesize numLocations=_numLocations - In the implementation block
@property (assign,nonatomic) char hasNumLocationGroups; 
@property (assign,nonatomic) unsigned numLocationGroups;                      //@synthesize numLocationGroups=_numLocationGroups - In the implementation block
@property (assign,nonatomic) char hasNumAccessoryServiceGroups; 
@property (assign,nonatomic) unsigned numAccessoryServiceGroups;              //@synthesize numAccessoryServiceGroups=_numAccessoryServiceGroups - In the implementation block
@property (assign,nonatomic) char hasDatabaseSize; 
@property (assign,nonatomic) unsigned databaseSize;                           //@synthesize databaseSize=_databaseSize - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTimestamp;
-(unsigned)databaseSize;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(char)hasGuid;
-(NSString *)guid;
-(unsigned)numHomes;
-(void)setNumHomes:(unsigned)arg1 ;
-(unsigned)numAccessories;
-(void)setNumAccessories:(unsigned)arg1 ;
-(unsigned)numServices;
-(void)setNumServices:(unsigned)arg1 ;
-(unsigned)numUsers;
-(void)setNumUsers:(unsigned)arg1 ;
-(unsigned)numScenes;
-(void)setNumScenes:(unsigned)arg1 ;
-(unsigned)numTriggers;
-(void)setNumTriggers:(unsigned)arg1 ;
-(unsigned)numLocations;
-(void)setNumLocations:(unsigned)arg1 ;
-(unsigned)numLocationGroups;
-(void)setNumLocationGroups:(unsigned)arg1 ;
-(unsigned)numAccessoryServiceGroups;
-(void)setNumAccessoryServiceGroups:(unsigned)arg1 ;
-(void)setDatabaseSize:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasNumHomes:(char)arg1 ;
-(char)hasNumHomes;
-(void)setHasNumAccessories:(char)arg1 ;
-(char)hasNumAccessories;
-(void)setHasNumServices:(char)arg1 ;
-(char)hasNumServices;
-(void)setHasNumUsers:(char)arg1 ;
-(char)hasNumUsers;
-(void)setHasNumScenes:(char)arg1 ;
-(char)hasNumScenes;
-(void)setHasNumTriggers:(char)arg1 ;
-(char)hasNumTriggers;
-(void)setHasNumLocations:(char)arg1 ;
-(char)hasNumLocations;
-(void)setHasNumLocationGroups:(char)arg1 ;
-(char)hasNumLocationGroups;
-(void)setHasNumAccessoryServiceGroups:(char)arg1 ;
-(char)hasNumAccessoryServiceGroups;
-(void)setHasDatabaseSize:(char)arg1 ;
-(char)hasDatabaseSize;
@end

