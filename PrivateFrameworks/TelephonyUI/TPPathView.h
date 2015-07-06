/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface TPPathView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(UIBezierPath *)path;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setPath:(UIBezierPath *)arg1 ;
@end

