/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentListCluster : NSObject {

	unsigned _month;
	unsigned _year;
	unsigned _numberOfMoments;
	unsigned _numberOfAssets;
	NSMutableSet* __moments;

}

@property (nonatomic,readonly) unsigned month;                        //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) unsigned year;                         //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) unsigned numberOfMoments;              //@synthesize numberOfMoments=_numberOfMoments - In the implementation block
@property (nonatomic,readonly) unsigned numberOfAssets;               //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _moments;               //@synthesize _moments=__moments - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned)year;
-(unsigned)month;
-(id)initWithMonth:(unsigned)arg1 year:(unsigned)arg2 ;
-(void)addMoment:(id)arg1 ;
-(void)removeMoment:(id)arg1 ;
-(unsigned)peak;
-(unsigned)numberOfMoments;
-(unsigned)numberOfAssets;
-(NSMutableSet *)_moments;
@end

