/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStoryboardSegueTemplate.h>

@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {

	char _useDefaultModalPresentationStyle;
	char _useDefaultModalTransitionStyle;
	int _modalPresentationStyle;
	int _modalTransitionStyle;
	char _animates;

}

@property (assign,nonatomic) char useDefaultModalPresentationStyle;              //@synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle - In the implementation block
@property (assign,nonatomic) char useDefaultModalTransitionStyle;                //@synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle - In the implementation block
@property (assign,nonatomic) int modalPresentationStyle;                         //@synthesize modalPresentationStyle=_modalPresentationStyle - In the implementation block
@property (assign,nonatomic) int modalTransitionStyle;                           //@synthesize modalTransitionStyle=_modalTransitionStyle - In the implementation block
@property (assign,nonatomic) char animates;                                      //@synthesize animates=_animates - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)modalPresentationStyle;
-(void)setModalPresentationStyle:(int)arg1 ;
-(int)modalTransitionStyle;
-(void)setModalTransitionStyle:(int)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)defaultSegueClassName;
-(void)setUseDefaultModalPresentationStyle:(char)arg1 ;
-(void)setUseDefaultModalTransitionStyle:(char)arg1 ;
-(void)setAnimates:(char)arg1 ;
-(char)useDefaultModalPresentationStyle;
-(char)useDefaultModalTransitionStyle;
-(char)animates;
@end

