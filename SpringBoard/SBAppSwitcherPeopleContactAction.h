/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:55 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSURL;

@interface SBAppSwitcherPeopleContactAction : NSObject <NSCopying> {

	unsigned _contactType;
	int _abRecordID;
	NSString* _label;
	NSString* _destinationID;
	NSObject*<OS_dispatch_queue> _urlUpdateQueue;
	unsigned _actionType;

}

@property (nonatomic,readonly) unsigned actionType;                   //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * destinationID;              //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
-(id)initWithType:(unsigned)arg1 label:(id)arg2 destinationID:(id)arg3 addressBookRecordID:(int)arg4 ;
-(void)dealloc;
-(id)description;
-(NSURL *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(unsigned)actionType;
-(NSString *)destinationID;
@end

