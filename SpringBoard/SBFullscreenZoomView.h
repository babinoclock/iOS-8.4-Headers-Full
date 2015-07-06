/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:45 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBZoomView.h>

@interface SBFullscreenZoomView : SBZoomView {

	char _hasImage;
	char _hasFullSizedImage;
	id _surface;

}

@property (nonatomic,readonly) id surface; 
-(id)_initWithFrame:(CGRect)arg1 ;
-(void)_addBlackBackground;
-(id)_initWithView:(id)arg1 screen:(id)arg2 needsBlackBackground:(char)arg3 ;
-(id)initWithContextHostView:(id)arg1 screen:(id)arg2 ;
-(id)initWithSnapshotFrame:(CGRect)arg1 screen:(id)arg2 image:(id)arg3 originalImageOrientation:(int)arg4 currentImageOrientation:(int)arg5 interfaceOrientation:(int)arg6 doubleHeightStatusBar:(char)arg7 preventSplit:(char)arg8 needsZoomFilter:(char)arg9 asyncDecodeImage:(char)arg10 opaque:(char)arg11 forceRotationOnPhone:(char)arg12 forJail:(char)arg13 ;
-(id)initWithImage:(id)arg1 screen:(id)arg2 opaque:(char)arg3 ;
-(id)initWithContextHostSnapshotView:(id)arg1 screen:(id)arg2 ;
-(id)surface;
@end

