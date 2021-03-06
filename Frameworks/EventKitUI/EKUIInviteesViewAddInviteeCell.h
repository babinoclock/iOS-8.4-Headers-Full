/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSArray, NSLayoutConstraint, NSString;

@interface EKUIInviteesViewAddInviteeCell : UITableViewCell {

	float _leftInset;
	UILabel* _simpleTextLabel;
	NSArray* _persistentConstraints;
	NSLayoutConstraint* _leftInsetConstraint;
	NSString* _simpleText;

}

@property (assign,nonatomic) float leftInset;                                       //@synthesize leftInset=_leftInset - In the implementation block
@property (nonatomic,retain) UILabel * simpleTextLabel;                             //@synthesize simpleTextLabel=_simpleTextLabel - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                       //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftInsetConstraint;              //@synthesize leftInsetConstraint=_leftInsetConstraint - In the implementation block
@property (nonatomic,retain) NSString * simpleText;                                 //@synthesize simpleText=_simpleText - In the implementation block
+(id)_simpleTextLabelFont;
-(NSArray *)persistentConstraints;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(void)setSimpleTextLabel:(UILabel *)arg1 ;
-(UILabel *)simpleTextLabel;
-(void)setLeftInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftInsetConstraint;
-(NSString *)simpleText;
-(void)setSimpleText:(NSString *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(float)leftInset;
-(void)setLeftInset:(float)arg1 ;
@end

