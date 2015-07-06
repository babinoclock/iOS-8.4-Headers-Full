/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSString;

@interface UIKBSplitImageView : UIView {

	UIImageView* _fullView;
	UIImageView* _splitLeft;
	UIImageView* _splitRight;
	NSString* _currentFilterType;

}

@property (assign,nonatomic) NSString * filterType;              //@synthesize currentFilterType=_currentFilterType - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setAlpha:(float)arg1 ;
-(char)_shouldInheritScreenScaleAsContentScaleFactor;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4 ;
-(void)insertSubviewAtBottom:(id)arg1 ;
-(void)setImage:(id)arg1 cachedWidth:(float)arg2 keyplane:(id)arg3 ;
-(void)clearImages;
@end
