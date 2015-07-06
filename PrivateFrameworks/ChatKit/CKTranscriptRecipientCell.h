/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSString, UIImage, UIButton, NSMutableArray, UILabel, UIImageView;

@interface CKTranscriptRecipientCell : UITableViewCell {

	char _showsLocation;
	char _showMailButton;
	char _showPhoneButton;
	char _showFaceTimeVideoButton;
	char _showInfoButton;
	NSString* _entityName;
	NSString* _locationString;
	UIImage* _contactImage;
	UIButton* _mailButton;
	UIButton* _phoneButton;
	UIButton* _facetimeVideoButton;
	UIButton* _infoButton;
	float _margin;
	NSMutableArray* _visibleButtons;
	UILabel* _nameLabel;
	UILabel* _locationLabel;
	UIImageView* _contactImageView;

}

@property (nonatomic,copy) NSString * entityName;                          //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,copy) NSString * locationString;                      //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) char showsLocation;                           //@synthesize showsLocation=_showsLocation - In the implementation block
@property (assign,nonatomic) char showMailButton;                          //@synthesize showMailButton=_showMailButton - In the implementation block
@property (assign,nonatomic) char showPhoneButton;                         //@synthesize showPhoneButton=_showPhoneButton - In the implementation block
@property (assign,nonatomic) char showFaceTimeVideoButton;                 //@synthesize showFaceTimeVideoButton=_showFaceTimeVideoButton - In the implementation block
@property (assign,nonatomic) char showInfoButton;                          //@synthesize showInfoButton=_showInfoButton - In the implementation block
@property (nonatomic,retain) UIImage * contactImage;                       //@synthesize contactImage=_contactImage - In the implementation block
@property (nonatomic,retain) UIButton * mailButton;                        //@synthesize mailButton=_mailButton - In the implementation block
@property (nonatomic,retain) UIButton * phoneButton;                       //@synthesize phoneButton=_phoneButton - In the implementation block
@property (nonatomic,retain) UIButton * facetimeVideoButton;               //@synthesize facetimeVideoButton=_facetimeVideoButton - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                        //@synthesize infoButton=_infoButton - In the implementation block
@property (assign,nonatomic) float margin;                                 //@synthesize margin=_margin - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleButtons;              //@synthesize visibleButtons=_visibleButtons - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                      //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;               //@synthesize contactImageView=_contactImageView - In the implementation block
+(float)preferredHeight;
+(id)identifier;
+(float)marginWidth;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setMailButton:(UIButton *)arg1 ;
-(void)setPhoneButton:(UIButton *)arg1 ;
-(void)setFacetimeVideoButton:(UIButton *)arg1 ;
-(void)setInfoButton:(UIButton *)arg1 ;
-(UIButton *)infoButton;
-(UIButton *)mailButton;
-(UIButton *)phoneButton;
-(UIButton *)facetimeVideoButton;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(UIImageView *)contactImageView;
-(NSMutableArray *)visibleButtons;
-(UIImage *)contactImage;
-(char)showsLocation;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)_updateVisibleButtons;
-(char)showInfoButton;
-(char)showFaceTimeVideoButton;
-(char)showPhoneButton;
-(char)showMailButton;
-(void)setShowsLocation:(char)arg1 ;
-(void)setShowInfoButton:(char)arg1 ;
-(void)setShowMailButton:(char)arg1 ;
-(void)setShowPhoneButton:(char)arg1 ;
-(void)setShowFaceTimeVideoButton:(char)arg1 ;
-(void)setLocationString:(NSString *)arg1 ;
-(void)setContactImage:(UIImage *)arg1 ;
-(void)setVisibleButtons:(NSMutableArray *)arg1 ;
-(NSString *)entityName;
-(NSString *)locationString;
-(void)setEntityName:(NSString *)arg1 ;
-(float)margin;
-(void)setMargin:(float)arg1 ;
@end

