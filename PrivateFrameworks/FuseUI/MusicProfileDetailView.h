/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MusicProfileDetailViewDelegate;
@class MusicProfileFollowButton, NSString, UILabel, UITapGestureRecognizer, UIButton, MusicMediaDetailTintInformation, UIControl;

@interface MusicProfileDetailView : UIView {

	char _adminEnabled;
	MusicProfileFollowButton* _editButton;
	NSString* _editText;
	char _following;
	char _followingInitialized;
	NSString* _followersCountText;
	NSString* _followersText;
	UILabel* _followersCountLabel;
	UILabel* _followersLabel;
	MusicProfileFollowButton* _followButton;
	UILabel* _profileLabel;
	UITapGestureRecognizer* _profileLabelTapGestureRecognizer;
	UIButton* _shareActionsButton;
	NSString* _title;
	char _followHidden;
	char _titleShouldAllowSelection;
	id<MusicProfileDetailViewDelegate> _delegate;
	NSString* _followingText;
	NSString* _followText;
	UIButton* _contextualActionsButton;
	MusicMediaDetailTintInformation* _detailTintInformation;
	int _tintStyle;

}

@property (assign,nonatomic,__weak) id<MusicProfileDetailViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isAdminEnabled,nonatomic) char adminEnabled;                            //@synthesize adminEnabled=_adminEnabled - In the implementation block
@property (nonatomic,readonly) UIControl * editButton;                                           //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,copy) NSString * editText;                                                  //@synthesize editText=_editText - In the implementation block
@property (nonatomic,copy) NSString * followingText;                                             //@synthesize followingText=_followingText - In the implementation block
@property (nonatomic,copy) NSString * followText;                                                //@synthesize followText=_followText - In the implementation block
@property (nonatomic,copy) NSString * followersCountText;                                        //@synthesize followersCountText=_followersCountText - In the implementation block
@property (nonatomic,copy) NSString * followersText;                                             //@synthesize followersText=_followersText - In the implementation block
@property (assign,getter=isFollowing,nonatomic) char following;                                  //@synthesize following=_following - In the implementation block
@property (assign,getter=isFollowHidden,nonatomic) char followHidden;                            //@synthesize followHidden=_followHidden - In the implementation block
@property (nonatomic,readonly) UIButton * contextualActionsButton;                               //@synthesize contextualActionsButton=_contextualActionsButton - In the implementation block
@property (nonatomic,readonly) UIButton * shareActionsButton;                                    //@synthesize shareActionsButton=_shareActionsButton - In the implementation block
@property (nonatomic,copy) MusicMediaDetailTintInformation * detailTintInformation;              //@synthesize detailTintInformation=_detailTintInformation - In the implementation block
@property (nonatomic,copy) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) char titleShouldAllowSelection;                                     //@synthesize titleShouldAllowSelection=_titleShouldAllowSelection - In the implementation block
@property (assign,nonatomic) int tintStyle;                                                      //@synthesize tintStyle=_tintStyle - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MusicProfileDetailViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MusicProfileDetailViewDelegate>)delegate;
-(NSString *)title;
-(void)layoutMarginsDidChange;
-(UIEdgeInsets)layoutMargins;
-(void)tintColorDidChange;
-(UIButton *)contextualActionsButton;
-(void)_contextualActionsButtonTapped:(id)arg1 ;
-(void)_editButtonTouchUpInsideAction:(id)arg1 ;
-(void)_followButtonTouchUpInsideAction:(id)arg1 ;
-(void)_shareActionsButtonTapped:(id)arg1 ;
-(void)_applyDetailTintInformation;
-(void)_profileLabelTapped:(id)arg1 ;
-(void)setFollowingText:(NSString *)arg1 ;
-(void)setFollowing:(char)arg1 animated:(char)arg2 ;
-(void)_setFollowing:(char)arg1 animated:(char)arg2 ;
-(void)_updateVisibilityOfFollowItems;
-(void)_layoutAvailableItems;
-(void)setDetailTintInformation:(MusicMediaDetailTintInformation *)arg1 ;
-(void)setAdminEnabled:(char)arg1 ;
-(void)setEditText:(NSString *)arg1 ;
-(void)setFollowHidden:(char)arg1 ;
-(void)setFollowText:(NSString *)arg1 ;
-(void)setFollowing:(char)arg1 ;
-(void)setFollowersCountText:(NSString *)arg1 ;
-(void)setFollowersText:(NSString *)arg1 ;
-(void)setTitleShouldAllowSelection:(char)arg1 ;
-(void)setTintStyle:(int)arg1 ;
-(char)isAdminEnabled;
-(UIControl *)editButton;
-(NSString *)editText;
-(NSString *)followingText;
-(NSString *)followText;
-(NSString *)followersCountText;
-(NSString *)followersText;
-(char)isFollowing;
-(char)isFollowHidden;
-(UIButton *)shareActionsButton;
-(MusicMediaDetailTintInformation *)detailTintInformation;
-(char)titleShouldAllowSelection;
-(int)tintStyle;
@end
