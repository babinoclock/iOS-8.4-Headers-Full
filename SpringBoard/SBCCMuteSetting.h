/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:57 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBCCSettingModule.h>

@interface SBCCMuteSetting : SBCCSettingModule
+(char)isSupported:(int)arg1 ;
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(char)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(void)_tearDown;
-(void)dealloc;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(char)isRestricted;
@end

