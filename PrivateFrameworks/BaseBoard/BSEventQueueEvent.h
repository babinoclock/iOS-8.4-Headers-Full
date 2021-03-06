/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface BSEventQueueEvent : NSObject {

	NSString* _name;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id handler;                   //@synthesize handler=_handler - In the implementation block
+(id)eventWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)executeFromEventQueue;
-(void)_execute;
-(char)isEqualToEvent:(id)arg1 ;
-(void)execute;
@end

