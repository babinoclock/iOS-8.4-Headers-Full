/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:59 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <FrontBoard/FBWindow.h>

@protocol SBWindowLayoutStrategy;
@class SBRecycledViewsContainer;

@interface SBWindow : FBWindow {

	SBRecycledViewsContainer* _recycledViewsContainerView;
	int _jailBehavior;
	id<SBWindowLayoutStrategy> _layoutStrategy;

}

@property (nonatomic,readonly) UIEdgeInsets jailInsets; 
@property (nonatomic,retain,readonly) id<SBWindowLayoutStrategy> layoutStrategy;              //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
+(UIEdgeInsets)_jailInsetsForScreen:(id)arg1 ;
+(CGRect)_actualBoundsForScreen:(id)arg1 withJailBehavior:(int)arg2 ;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 ;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(id)recycledViewsContainer;
-(id)initWithScreen:(id)arg1 debugName:(id)arg2 scene:(id)arg3 ;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 ;
-(id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(UIEdgeInsets)jailInsets;
-(id<SBWindowLayoutStrategy>)layoutStrategy;
-(void)setAlphaAndObeyBecauseIAmTheWindowManager:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)_isConstrainedByScreenJail;
-(char)_isClippedByScreenJail;
@end

