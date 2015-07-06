/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalPanPacketEvent : TRPacketEvent {

	int _gestureState;
	CGPoint _location;
	CGPoint _velocity;

}

@property (nonatomic,readonly) CGPoint location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) int gestureState;              //@synthesize gestureState=_gestureState - In the implementation block
@property (nonatomic,readonly) CGPoint velocity;              //@synthesize velocity=_velocity - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(CGPoint)velocity;
-(CGPoint)location;
-(int)gestureState;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithGestureState:(int)arg1 location:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
@end

