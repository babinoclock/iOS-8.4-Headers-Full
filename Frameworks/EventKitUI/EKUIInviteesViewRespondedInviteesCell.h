/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, NSArray, NSLayoutConstraint;

@interface EKUIInviteesViewRespondedInviteesCell : UITableViewCell {

	UILabel* _nameLabel;
	UILabel* _commentLabel;
	UIImageView* _participationStatusImageView;
	NSArray* _persistentConstraints;
	NSArray* _removableConstraints;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSLayoutConstraint* _nameBaselineToTopConstraint;

}

@property (nonatomic,retain) UILabel * nameLabel;                                           //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * commentLabel;                                        //@synthesize commentLabel=_commentLabel - In the implementation block
@property (nonatomic,retain) UIImageView * participationStatusImageView;                    //@synthesize participationStatusImageView=_participationStatusImageView - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                               //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (nonatomic,retain) NSArray * removableConstraints;                                //@synthesize removableConstraints=_removableConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minimumHeightConstraint;                  //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameBaselineToTopConstraint;              //@synthesize nameBaselineToTopConstraint=_nameBaselineToTopConstraint - In the implementation block
+(id)_nameLabelFont;
+(id)_commentLabelFont;
+(float)_leftTextInset;
-(void)setParticipationStatusImageView:(UIImageView *)arg1 ;
-(void)setCommentLabel:(UILabel *)arg1 ;
-(NSArray *)persistentConstraints;
-(UIImageView *)participationStatusImageView;
-(UILabel *)commentLabel;
-(void)setNameBaselineToTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nameBaselineToTopConstraint;
-(void)setMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(NSArray *)removableConstraints;
-(void)setRemovableConstraints:(NSArray *)arg1 ;
-(void)updateWithParticipantForSorting:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
@end
