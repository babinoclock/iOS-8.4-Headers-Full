/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CECInterface.h>

@class NSMutableDictionary;

@interface CECFakeInterface : CECInterface {

	NSMutableDictionary* _properties;

}
+(id)defaultTVProperties;
+(id)defaultPlaybackDeviceProperties;
-(void)dealloc;
-(char)isValid;
-(id)properties;
-(id)initWithInterfaceListener:(id)arg1 properties:(id)arg2 ;
-(char)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(char)pingTo:(unsigned char)arg1 acknowledged:(char*)arg2 error:(id*)arg3 ;
-(void)fakePropertiesChanged:(id)arg1 ;
-(void)fakeTerminated;
@end

