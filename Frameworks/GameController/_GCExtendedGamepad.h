/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GCExtendedGamepad.h>
#import <GameController/GCNamedProfile.h>
#import <GameController/NSSecureCoding.h>

@class GCController, _GCControllerDirectionPad, _GCControllerButtonInput, NSString;

@interface _GCExtendedGamepad : GCExtendedGamepad <GCNamedProfile, NSSecureCoding> {

	GCController* _controller;
	/*^block*/id _valueChangedHandler;
	_GCControllerDirectionPad* _dpad;
	_GCControllerDirectionPad* _leftThumbstick;
	_GCControllerDirectionPad* _rightThumbstick;
	_GCControllerButtonInput* _button0;
	_GCControllerButtonInput* _button1;
	_GCControllerButtonInput* _button2;
	_GCControllerButtonInput* _button3;
	_GCControllerButtonInput* _leftShoulder;
	_GCControllerButtonInput* _rightShoulder;
	_GCControllerButtonInput* _leftTrigger;
	_GCControllerButtonInput* _rightTrigger;
	char _dpadFlippedY;
	char _leftFlippedY;
	char _rightFlippedY;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * name; 
+(char)supportsUSBInterfaceProtocol:(unsigned char)arg1 ;
+(char)supportsSecureCoding;
-(id)dpad;
-(id)buttonA;
-(id)buttonB;
-(id)buttonX;
-(id)buttonY;
-(id)leftShoulder;
-(id)rightShoulder;
-(id)leftThumbstick;
-(id)rightThumbstick;
-(id)leftTrigger;
-(id)rightTrigger;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(void)setPlayerIndex:(int)arg1 ;
-(id)initWithController:(id)arg1 dpadFlippedY:(char)arg2 leftFlippedY:(char)arg3 rightFlippedY:(char)arg4 ;
-(id)initWithController:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)controller;
-(void)setController:(id)arg1 ;
@end

