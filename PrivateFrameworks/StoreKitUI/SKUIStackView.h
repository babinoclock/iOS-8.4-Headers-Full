/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSMutableArray, UIWindow;

@interface SKUIStackView : UIView {

	UIImage* _image;
	NSMutableArray* _stackViews;
	int _stackViewStyle;
	UIWindow* _window;

}

@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) int stackViewStyle;              //@synthesize stackViewStyle=_stackViewStyle - In the implementation block
-(int)stackViewStyle;
-(void)setImage:(UIImage *)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(UIImage *)image;
-(void)performCompressionAnimationWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)_stackDepth;
-(id)_initSKUIStackView;
-(CGSize)_sizeOfItemAtIndex:(float)arg1 ;
-(UIOffset)_relativeOffsetOfItemAtIndex:(int)arg1 withCenter:(CGPoint)arg2 ;
-(CGPoint)_centerInPerspectiveTargetViewCoordinates;
-(CGSize)_levelInsetSize;
-(CGSize)_normalizedDistanceFromVanishingPointForCenter:(CGPoint)arg1 perspectiveTargetView:(id)arg2 ;
-(UIOffset)_relativeOffsetForMinimumRelativeOffset:(UIOffset)arg1 maximumRelativeOffset:(UIOffset)arg2 normalizedDistanceFromVanishingPoint:(CGSize)arg3 ;
-(id)initWithStackViewStyle:(int)arg1 ;
@end

