/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROHandlerProtocol
@required
-(int)handlePerformActionForKey:(int)arg1 trusted:(char)arg2;
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(char)arg2;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(char)arg3;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(char)arg3;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(char)arg4;

@end
