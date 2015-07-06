/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
@optional
-(void)beginService;
-(void)endService;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2;

@required
+(void)becameFatallyBlocked:(id)arg1;
+(id)getSilo;
+(char)isSupported;

@end

