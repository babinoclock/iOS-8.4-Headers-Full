/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAnimation.h>

@interface UITransformAnimation : UIAnimation {

	CGAffineTransform _startTransform;
	CGAffineTransform _endTransform;

}
-(void)setProgress:(float)arg1 ;
-(CGAffineTransform)_transformWithMultiplier:(float)arg1 ;
-(void)setStartTransform:(CGAffineTransform)arg1 ;
-(void)setEndTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transformForFraction:(float)arg1 ;
@end

