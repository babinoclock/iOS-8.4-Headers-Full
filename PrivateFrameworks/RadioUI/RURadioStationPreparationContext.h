/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RadioGetTracksResponse, NSMapTable, RadioStation, NSArray, NSDate;

@interface RURadioStationPreparationContext : NSObject {

	RadioGetTracksResponse* _getTracksResponse;
	NSMapTable* _preparedAdSlotByRadioTrack;
	RadioStation* _station;

}

@property (nonatomic,copy,readonly) NSArray * allPreparedAdSlotRadioTracks; 
@property (nonatomic,readonly) char shouldIncrementSkipCount; 
@property (nonatomic,readonly) NSDate * skipDate; 
@property (nonatomic,readonly) RadioStation * station;                                   //@synthesize station=_station - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tracks; 
-(RadioStation *)station;
-(char)shouldIncrementSkipCount;
-(NSDate *)skipDate;
-(id)initWithGetTracksResponse:(id)arg1 station:(id)arg2 ;
-(NSArray *)allPreparedAdSlotRadioTracks;
-(id)preparedAdSlotForRadioTrack:(id)arg1 ;
-(void)addPreparedAdSlot:(id)arg1 forRadioTrack:(id)arg2 ;
-(NSArray *)tracks;
@end
