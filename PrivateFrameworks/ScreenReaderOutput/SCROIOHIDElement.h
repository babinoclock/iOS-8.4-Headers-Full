/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <ScreenReaderOutput/SCROIOElement.h>
#import <ScreenReaderOutput/SCROIOHIDElementProtocol.h>

@class NSString;

@interface SCROIOHIDElement : SCROIOElement <SCROIOHIDElementProtocol> {

	IOHIDDeviceRef _hidDevice;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)transport;
-(id)initWithIOObject:(unsigned)arg1 ;
-(IOHIDDeviceRef)hidDevice;
@end

