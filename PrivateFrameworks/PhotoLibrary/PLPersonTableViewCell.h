/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, NSString, UIImageView;

@interface PLPersonTableViewCell : UITableViewCell {

	UIImage* _personIcon;
	NSString* _personFirstName;
	NSString* _personLastName;
	UIImageView* __personIconImageView;
	UIImage* __personMonogramImage;

}

@property (nonatomic,retain) UIImage * personIcon;                                                            //@synthesize personIcon=_personIcon - In the implementation block
@property (nonatomic,copy) NSString * personFirstName;                                                        //@synthesize personFirstName=_personFirstName - In the implementation block
@property (nonatomic,copy) NSString * personLastName;                                                         //@synthesize personLastName=_personLastName - In the implementation block
@property (setter=_setPersonIconImageView:,nonatomic,retain) UIImageView * _personIconImageView;              //@synthesize _personIconImageView=__personIconImageView - In the implementation block
@property (setter=_setPersonMonogramImage:,nonatomic,retain) UIImage * _personMonogramImage;                  //@synthesize _personMonogramImage=__personMonogramImage - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setPersonIcon:(UIImage *)arg1 ;
-(void)setPersonFirstName:(NSString *)arg1 ;
-(void)setPersonLastName:(NSString *)arg1 ;
-(UIImageView *)_personIconImageView;
-(UIImage *)personIcon;
-(UIImage *)_personMonogramImage;
-(NSString *)personFirstName;
-(NSString *)personLastName;
-(void)_setPersonMonogramImage:(id)arg1 ;
-(void)_updatePersonIconImageView;
-(void)_setPersonIconImageView:(id)arg1 ;
@end

