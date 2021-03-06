/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, CLLocation, NSDate;

@interface EKTravelAgendaItem : NSObject {

	/*^block*/id _adviceBlock;
	double _initialDistanceFromDestination;
	char _haveAdvised;
	NSMutableArray* _trace;
	CLLocation* _location;
	NSDate* _date;
	int _travelMethod;

}

@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) int travelMethod;                   //@synthesize travelMethod=_travelMethod - In the implementation block
+(char)_clLocation:(id)arg1 isEqualToCLLocation:(id)arg2 ;
-(id)initWithLocation:(id)arg1 date:(id)arg2 travelMethod:(int)arg3 adviceBlock:(/*^block*/id)arg4 ;
-(int)travelMethod;
-(id)initWithLocation:(id)arg1 date:(id)arg2 adviceBlock:(/*^block*/id)arg3 ;
-(void)advise:(id)arg1 ;
-(char)isCloseToPersonAtLocation:(id)arg1 ;
-(char)haveAdvised;
-(char)isEqualToTravelAgendaItem:(id)arg1 ;
-(char)writeTraceToDisk;
-(void)tracePrediction:(id)arg1 date:(id)arg2 delay:(double)arg3 ;
-(void)traceLocation:(id)arg1 date:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSDate *)date;
-(CLLocation *)location;
@end

