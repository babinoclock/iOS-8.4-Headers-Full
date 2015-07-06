/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRNowPlayingControlPacketEvent : TRPacketEvent {

	int _controlCommand;

}

@property (nonatomic,readonly) int controlCommand;              //@synthesize controlCommand=_controlCommand - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(int)controlCommand;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithControlCommand:(int)arg1 ;
@end

