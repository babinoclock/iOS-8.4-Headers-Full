/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBCCShortcutModule.h>

@class NSString, NSDateFormatter;

@interface SBCCRecordScreenShortcut : SBCCShortcutModule {

	unsigned long long _sessionToken;
	NSString* _lastRecordingPath;
	NSDateFormatter* _dateFormatter;

}
+(char)enabledByDefault;
+(char)isSupported:(int)arg1 ;
+(id)identifier;
+(id)displayName;
-(char)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(id)statusUpdate;
-(void)_videoAtPath:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_stopRecording;
-(void)_startRecording;
-(void)dealloc;
-(void)deactivate;
-(void)activate;
@end

