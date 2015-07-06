/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStoryboardSegue.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class NSArray, UIBarButtonItem, UIView, NSString;

@interface UIStoryboardPopoverPresentationSegue : UIStoryboardSegue <UIPopoverPresentationControllerDelegate> {

	NSArray* _passthroughViews;
	unsigned _permittedArrowDirections;
	UIBarButtonItem* _anchorBarButtonItem;
	UIView* _anchorView;
	CGRect _anchorRect;

}

@property (nonatomic,copy) NSArray * passthroughViews;                           //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (assign,nonatomic) unsigned permittedArrowDirections;                  //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * anchorBarButtonItem;              //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
@property (nonatomic,retain) UIView * anchorView;                                //@synthesize anchorView=_anchorView - In the implementation block
@property (assign,nonatomic) CGRect anchorRect;                                  //@synthesize anchorRect=_anchorRect - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_prepare;
-(CGRect)anchorRect;
-(UIView *)anchorView;
-(UIBarButtonItem *)anchorBarButtonItem;
-(unsigned)permittedArrowDirections;
-(void)setPermittedArrowDirections:(unsigned)arg1 ;
-(void)perform;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)setAnchorBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setAnchorView:(UIView *)arg1 ;
-(void)setAnchorRect:(CGRect)arg1 ;
@end

