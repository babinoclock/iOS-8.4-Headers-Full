/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface RadioRevision : NSManagedObject

@property (assign,nonatomic) long long revisionID; 
@property (assign,nonatomic) int revisionType; 
@property (assign,nonatomic) long long stationID; 
-(long long)stationID;
-(void)setStationID:(long long)arg1 ;
-(void)setRevisionID:(long long)arg1 ;
-(void)setRevisionType:(int)arg1 ;
-(int)revisionType;
-(long long)revisionID;
@end

