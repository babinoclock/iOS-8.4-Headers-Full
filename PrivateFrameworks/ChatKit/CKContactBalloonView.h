/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>
#import <ChatKit/CKContactBalloonViewProtocol.h>

@class CKMediaObject, UIImageView, UILabel, NSString;

@interface CKContactBalloonView : CKColoredBalloonView <CKContactBalloonViewProtocol> {

	CKMediaObject* _mediaObject;
	UIImageView* _chevron;
	UIImageView* _contactImageView;
	UILabel* _nameLabel;
	UILabel* _organizationLabel;

}

@property (nonatomic,retain) UIImageView * chevron;                       //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * organizationLabel;                 //@synthesize organizationLabel=_organizationLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)description;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForReuse;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(UIImageView *)contactImageView;
-(void)prepareForDisplay;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(float)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(CKMediaObject *)mediaObject;
-(UILabel *)organizationLabel;
-(void)setOrganizationLabel:(UILabel *)arg1 ;
@end

