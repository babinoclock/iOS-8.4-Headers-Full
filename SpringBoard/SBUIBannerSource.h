/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:54 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBUIBannerSource <NSObject>
@optional
-(void)bannerViewWillAppear:(id)arg1;
-(void)bannerViewDidAppear:(id)arg1;
-(void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2;
-(void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;

@required
-(id)newBannerViewForContext:(id)arg1;
-(id)peekNextBannerItemForTarget:(id)arg1;
-(id)dequeueNextBannerItemForTarget:(id)arg1;

@end

