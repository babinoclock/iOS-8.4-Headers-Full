/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CDDebug;

@interface CDDPluginResponder : NSObject {

	CDDebug* _debug;

}

@property (readonly) CDDebug * debug;              //@synthesize debug=_debug - In the implementation block
-(CDDebug *)debug;
-(id)init;
-(id)makeStashWithId:(unsigned long long)arg1 ;
-(char)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(int)arg4 error:(id*)arg5 ;
-(char)respondToInitOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5 ;
-(char)respondToAdmissionSignoffOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(char)arg4 reasons:(id)arg5 error:(id*)arg6 ;
-(char)respondToTriggerOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 info:(id)arg4 error:(id*)arg5 ;
-(char)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(char)arg4 reasons:(id)arg5 error:(id*)arg6 ;
@end

