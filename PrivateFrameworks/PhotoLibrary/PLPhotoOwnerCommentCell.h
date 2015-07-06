/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, UILabel, UIView;

@interface PLPhotoOwnerCommentCell : UITableViewCell {

	NSAttributedString* _ownerString;
	UILabel* _ownerContentLabel;
	UIView* _styledSeparatorView;

}

@property (nonatomic,copy) NSAttributedString * ownerString;                     //@synthesize ownerString=_ownerString - In the implementation block
@property (nonatomic,retain,readonly) UILabel * ownerContentLabel;               //@synthesize ownerContentLabel=_ownerContentLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(float)heightOfOwnerCellWithAsset:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3 ;
+(id)_ownerStringForAsset:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)updateContentFromAsset:(id)arg1 ;
-(void)setOwnerString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)ownerString;
-(UILabel *)ownerContentLabel;
-(UIView *)styledSeparatorView;
@end

