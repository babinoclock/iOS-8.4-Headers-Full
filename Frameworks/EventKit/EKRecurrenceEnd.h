/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/NSCopying.h>

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {

	NSDate* _endDate;
	unsigned _occurrenceCount;

}

@property (nonatomic,readonly) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned occurrenceCount;              //@synthesize occurrenceCount=_occurrenceCount - In the implementation block
@property (nonatomic,readonly) char usesEndDate; 
+(id)recurrenceEndWithEndDate:(id)arg1 ;
+(id)recurrenceEndWithOccurrenceCount:(unsigned)arg1 ;
-(unsigned)occurrenceCount;
-(id)initWithEndDate:(id)arg1 ;
-(id)initWithOccurrenceCount:(unsigned)arg1 ;
-(char)usesEndDate;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)endDate;
@end

