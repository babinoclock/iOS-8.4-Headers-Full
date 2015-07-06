/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:49 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIBannerItem.h>
#import <SpringBoard/SBDefaultBannerViewSource.h>
#import <SpringBoard/SBUIQuietModePlayability.h>

@protocol SBLockScreenActionHandler, SBLockScreenNotificationBannerItemDelegate;
@class SBAwayListItem, NSString;

@interface SBLockScreenNotificationBannerItem : SBUIBannerItem <SBDefaultBannerViewSource, SBUIQuietModePlayability> {

	SBAwayListItem* _listItem;
	id<SBLockScreenActionHandler> _lockedActionHandler;
	id<SBLockScreenNotificationBannerItemDelegate> _delegate;

}

@property (nonatomic,readonly) SBAwayListItem * listItem;                                          //@synthesize listItem=_listItem - In the implementation block
@property (nonatomic,retain) id<SBLockScreenActionHandler> unlockActionHandler;                    //@synthesize lockedActionHandler=_lockedActionHandler - In the implementation block
@property (assign,nonatomic) id<SBLockScreenNotificationBannerItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithListItem:(id)arg1 ;
-(id)sourceDate;
-(id)attachmentImage;
-(id)lockScreenActionContext;
-(void)setUnlockActionHandler:(id<SBLockScreenActionHandler>)arg1 ;
-(id)suppressedMessage;
-(char)showMessagePreview;
-(id<SBLockScreenActionHandler>)unlockActionHandler;
-(void)dealloc;
-(void)setDelegate:(id<SBLockScreenNotificationBannerItemDelegate>)arg1 ;
-(id<SBLockScreenNotificationBannerItemDelegate>)delegate;
-(/*^block*/id)action;
-(id)title;
-(id)message;
-(id)sortDate;
-(id)subtitle;
-(id)iconImage;
-(char)isCritical;
-(id)accessoryIconMask;
-(char)shouldPlayLightsAndSirens;
-(char)inertWhenLocked;
-(id)attachmentText;
-(SBAwayListItem *)listItem;
-(char)overridesQuietMode;
-(char)canShowWhileLocked;
@end

