/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityValueContext.h>

@class NSString;

@interface MusicSectionEntityValueContext : MusicEntityValueContext {

	char _wantsLocalizedTitle;
	NSString* _localizedTitle;

}

@property (assign,nonatomic) char wantsLocalizedTitle;              //@synthesize wantsLocalizedTitle=_wantsLocalizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;               //@synthesize localizedTitle=_localizedTitle - In the implementation block
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedTitle;
-(void)resetOutputValues;
-(char)wantsLocalizedTitle;
-(void)setWantsLocalizedTitle:(char)arg1 ;
@end

