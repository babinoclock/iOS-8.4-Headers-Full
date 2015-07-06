/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:57 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>
#import <SpringBoard/SBStarkNotificationViewControllerDelegate.h>

@protocol SBStarkSessionConfiguring;
@class SBStarkScreenFocusController, SBStarkNotificationViewController, NSString;

@interface SBStarkNotificationWindow : SBWindow <SBStarkNotificationViewControllerDelegate> {

	id<SBStarkSessionConfiguring> _configuration;
	SBStarkScreenFocusController* _focusController;
	char _assertingFocus;
	id _borrowScreenToken;

}

@property (nonatomic,retain) SBStarkScreenFocusController * focusController;                      //@synthesize focusController=_focusController - In the implementation block
@property (nonatomic,retain) SBStarkNotificationViewController * rootViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(void)setFocusController:(SBStarkScreenFocusController *)arg1 ;
-(id)initWithConfiguration:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2 ;
-(void)notificationViewController:(id)arg1 willDisplayBannerView:(id)arg2 ;
-(SBStarkScreenFocusController *)focusController;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setRootViewController:(SBStarkNotificationViewController *)arg1 ;
@end

