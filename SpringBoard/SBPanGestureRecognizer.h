/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:52 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFluidSlideGestureRecognizer.h>

@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer {

	float _arcCenter;
	float _arcSize;
	char _recognizesHorizontalPanning;
	char _recognizesVerticalPanning;

}
-(float)computeIncrementalGestureMotion:(SBGestureContextRef)arg1 ;
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)arg1 ;
-(id)initForHorizontalPanning;
-(id)initForVerticalPanning;
-(id)init;
@end

