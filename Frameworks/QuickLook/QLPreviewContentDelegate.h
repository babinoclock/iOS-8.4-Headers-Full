/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewContentDelegate <NSObject>
@optional
-(id)clientProcessAlertViewForPreviewContentController:(id)arg1;

@required
-(void)previewContentController:(id)arg1 willMoveToItemAtIndex:(int)arg2;
-(void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(int)arg3;
-(void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(int)arg3 withError:(id)arg4;
-(void)previewContentController:(id)arg1 didFailWithError:(id)arg2;
-(void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
-(void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
-(void)contentWasTappedInPreviewContentController:(id)arg1;
-(void)showContentsWasTappedInPreviewContentController:(id)arg1;
-(void)overlayWasTappedInPreviewContentController:(id)arg1;
-(void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2;
-(void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3;
-(void)previewContentController:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
-(void)previewContentControllerDidExitFullScreen:(id)arg1;

@end

