/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:28 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ApplePushService/APSMessage.h>

@interface APSOutgoingMessage : APSMessage

@property (assign,nonatomic) unsigned timeout; 
@property (assign,getter=isCritical,nonatomic) char critical; 
@property (assign,nonatomic) unsigned payloadFormat; 
@property (assign,nonatomic) unsigned payloadLength; 
-(id)timestamp;
-(void)setTimestamp:(id)arg1 ;
-(void)setCancelled:(char)arg1 ;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(unsigned)_effectiveSendTimeout;
-(id)eagernessTimeoutTime;
-(char)isEager;
-(id)sendTimeoutTime;
-(char)isCritical;
-(char)wasSent;
-(int)sendInterface;
-(void)setSendInterface:(int)arg1 ;
-(unsigned)payloadFormat;
-(unsigned)payloadLength;
-(void)setPayloadLength:(unsigned)arg1 ;
-(id)senderTokenName;
-(void)setSenderTokenName:(id)arg1 ;
-(void)setPayloadFormat:(unsigned)arg1 ;
-(void)setCritical:(char)arg1 ;
-(void)setTimeout:(unsigned)arg1 ;
-(void)setSent:(char)arg1 ;
-(void)setMessageID:(unsigned)arg1 ;
-(char)wasCancelled;
-(unsigned)messageID;
-(unsigned)timeout;
-(void)setTimedOut:(char)arg1 ;
-(char)hasTimedOut;
@end
