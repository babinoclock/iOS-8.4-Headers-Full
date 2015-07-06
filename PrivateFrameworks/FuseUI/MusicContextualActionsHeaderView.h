/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MusicContextualActionsHeaderViewDelegate;
@class UIImageView, MusicContextualActionsHeaderBlendingHighlightView, UILabel, MusicEntityValueContext;

@interface MusicContextualActionsHeaderView : UIView {

	UIImageView* _artworkView;
	MusicContextualActionsHeaderBlendingHighlightView* _backgroundBlendingHighlightView;
	UILabel* _detailLabel;
	UILabel* _titleLabel;
	SCD_Struct_Mu1 _delegateRespondsToSelector;
	char _allowsSelection;
	char _highlighted;
	id<MusicContextualActionsHeaderViewDelegate> _delegate;
	MusicEntityValueContext* _entityValueContext;

}

@property (assign,nonatomic) char allowsSelection;                                                      //@synthesize allowsSelection=_allowsSelection - In the implementation block
@property (assign,nonatomic,__weak) id<MusicContextualActionsHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MusicEntityValueContext * entityValueContext;                            //@synthesize entityValueContext=_entityValueContext - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;                                     //@synthesize highlighted=_highlighted - In the implementation block
+(float)defaultHeight;
-(void)setDelegate:(id<MusicContextualActionsHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MusicContextualActionsHeaderViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(void)setAllowsSelection:(char)arg1 ;
-(char)allowsSelection;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(id)_touchForEvent:(id)arg1 ;
-(MusicEntityValueContext *)entityValueContext;
-(id)initWithEntityValueContext:(id)arg1 ;
-(void)_reloadEntityValueProviderProperties;
@end

