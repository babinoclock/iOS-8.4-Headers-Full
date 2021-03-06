/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:55 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/NSCopying.h>

@class NSString, NSArray, NSDate;

@interface SBAppSwitcherPeopleContactItem : NSObject <NSCopying> {

	NSString* _name;
	unsigned _nameFormatHash;
	NSArray* _contactActions;
	int _personRecordID;
	NSDate* _recordLastUpdatedDate;

}

@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned nameFormatHash;                   //@synthesize nameFormatHash=_nameFormatHash - In the implementation block
@property (nonatomic,readonly) int personRecordID;                      //@synthesize personRecordID=_personRecordID - In the implementation block
@property (nonatomic,copy) NSArray * contactActions;                    //@synthesize contactActions=_contactActions - In the implementation block
@property (nonatomic,copy) NSDate * recordLastUpdatedDate;              //@synthesize recordLastUpdatedDate=_recordLastUpdatedDate - In the implementation block
-(NSArray *)contactActions;
-(int)personRecordID;
-(id)initWithName:(id)arg1 nameFormatHash:(unsigned)arg2 abRecordID:(int)arg3 lastUpdated:(id)arg4 contactActions:(id)arg5 ;
-(NSDate *)recordLastUpdatedDate;
-(unsigned)nameFormatHash;
-(char)hasFaceTimeAction;
-(char)hasFaceTimeAudioAction;
-(void)setNameFormatHash:(unsigned)arg1 ;
-(void)setContactActions:(NSArray *)arg1 ;
-(void)setRecordLastUpdatedDate:(NSDate *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

