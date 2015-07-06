/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@class NSString;

@interface TRKeyboardUserEntryPacketEvent : TRPacketEvent {

	int _commandType;
	NSString* _text;
	unsigned long long _sessionID;

}

@property (nonatomic,readonly) int commandType;                           //@synthesize commandType=_commandType - In the implementation block
@property (nonatomic,readonly) unsigned long long sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * text;                           //@synthesize text=_text - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(NSString *)text;
-(unsigned long long)sessionID;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithCommandType:(int)arg1 sessionID:(unsigned long long)arg2 text:(id)arg3 ;
-(int)commandType;
@end

