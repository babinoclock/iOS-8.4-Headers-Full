/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIStoryboardSegueTemplate.h>

@class NSArray, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate {

	unsigned _permittedArrowDirections;
	NSArray* _passthroughViews;
	UIView* _anchorView;
	UIBarButtonItem* _anchorBarButtonItem;

}

@property (assign,nonatomic) unsigned permittedArrowDirections;                  //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                           //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (nonatomic,retain) UIView * anchorView;                                //@synthesize anchorView=_anchorView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * anchorBarButtonItem;              //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIView *)anchorView;
-(UIBarButtonItem *)anchorBarButtonItem;
-(unsigned)permittedArrowDirections;
-(void)setPermittedArrowDirections:(unsigned)arg1 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)setAnchorBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setAnchorView:(UIView *)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(id)defaultSegueClassName;
@end

