/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WLOHomeKitConfiguration : NSObject {

	unsigned _numHomes;
	unsigned _numAccessories;
	unsigned _numServices;
	unsigned _numUsers;
	unsigned _numScenes;
	unsigned _numTriggers;
	unsigned _numLocations;
	unsigned _numLocationGroups;
	unsigned _numAccessoryServiceGroups;
	unsigned _databaseSize;

}

@property (assign) unsigned numHomes;                               //@synthesize numHomes=_numHomes - In the implementation block
@property (assign) unsigned numAccessories;                         //@synthesize numAccessories=_numAccessories - In the implementation block
@property (assign) unsigned numServices;                            //@synthesize numServices=_numServices - In the implementation block
@property (assign) unsigned numUsers;                               //@synthesize numUsers=_numUsers - In the implementation block
@property (assign) unsigned numScenes;                              //@synthesize numScenes=_numScenes - In the implementation block
@property (assign) unsigned numTriggers;                            //@synthesize numTriggers=_numTriggers - In the implementation block
@property (assign) unsigned numLocations;                           //@synthesize numLocations=_numLocations - In the implementation block
@property (assign) unsigned numLocationGroups;                      //@synthesize numLocationGroups=_numLocationGroups - In the implementation block
@property (assign) unsigned numAccessoryServiceGroups;              //@synthesize numAccessoryServiceGroups=_numAccessoryServiceGroups - In the implementation block
@property (assign) unsigned databaseSize;                           //@synthesize databaseSize=_databaseSize - In the implementation block
-(id)description;
-(unsigned)databaseSize;
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
@end

