/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable;

@interface GEOTileUsageInfo : NSObject {

	double _startTime;
	double _endTime;
	NSMapTable* _tileStyleToCount;
	unsigned _dataLength;

}

@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSMapTable * tileStyleToCount;              //@synthesize tileStyleToCount=_tileStyleToCount - In the implementation block
@property (nonatomic,readonly) unsigned dataLength;                        //@synthesize dataLength=_dataLength - In the implementation block
-(void)setEndTime:(double)arg1 ;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(void)addTileKey:(const GEOTileKey*)arg1 dataLength:(unsigned)arg2 ;
-(NSMapTable *)tileStyleToCount;
-(double)endTime;
-(unsigned)dataLength;
@end

