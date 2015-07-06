/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <MediaPlayerUI/MPUNowPlayingTransportControls.h>

@interface RUNowPlayingTransportControls : MPUNowPlayingTransportControls
+(unsigned long long)defaultVisibleParts;
-(id)tintColorForPart:(unsigned long long)arg1 ;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(void)_unregisterForAVItemNotifications;
-(void)_registerForAVItemNotifications;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setItem:(id)arg1 ;
-(void)_avItemStoreIDDidChangeNotification:(id)arg1 ;
-(void)_likedStateDidChangeNotification:(id)arg1 ;
-(float)_nextButtonVInset;
-(float)_playPauseBottomVInset;
-(void)_updateItemRelatedParts;
@end
