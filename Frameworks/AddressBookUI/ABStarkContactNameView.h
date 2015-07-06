/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface ABStarkContactNameView : UIView {

	UILabel* _nameLabel;
	UIImageView* _photoImageView;

}

@property (nonatomic,retain) UILabel * nameLabel;                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * photoImageView;              //@synthesize photoImageView=_photoImageView - In the implementation block
-(void)setPhotoImageView:(UIImageView *)arg1 ;
-(UIImageView *)photoImageView;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
@end

