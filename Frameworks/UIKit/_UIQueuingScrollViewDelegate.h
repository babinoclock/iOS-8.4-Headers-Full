/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIQueuingScrollViewDelegate <NSObject>
@required
-(void)queuingScrollView:(id)arg1 willManuallyScroll:(char)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(char)arg5;
-(void)queuingScrollView:(id)arg1 didCommitManualScroll:(char)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(int)arg5 animated:(char)arg6 canComplete:(char)arg7;
-(void)queuingScrollView:(id)arg1 didEndManualScroll:(char)arg2 toRevealView:(id)arg3 direction:(int)arg4 animated:(char)arg5 didFinish:(char)arg6 didComplete:(char)arg7;
-(void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
-(void)queuingScrollViewDidFinishScrolling:(id)arg1;
-(char)queuingScrollViewShouldLayoutSubviews:(id)arg1;

@end

