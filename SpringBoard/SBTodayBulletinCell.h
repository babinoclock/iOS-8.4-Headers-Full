/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:51 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/_SBFVibrantTableViewCell.h>
#import <SpringBoard/SBModalLayoutCaching.h>

@class UILabel, UIImageView, NSString;

@interface SBTodayBulletinCell : _SBFVibrantTableViewCell <SBModalLayoutCaching> {

	UILabel* _label;
	UIImageView* _iconImageView;
	int _layoutMode;

}

@property (assign,nonatomic) CGRect textRect; 
@property (nonatomic,copy) NSString * labelText; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int layoutMode;                        //@synthesize layoutMode=_layoutMode - In the implementation block
+(float)interCellSpacingInLayoutMode:(int)arg1 ;
+(float)snippetLineHeight;
+(id)defaultFontColor;
+(id)defaultFont;
+(id)defaultTextAttributes;
-(void)setLayoutMode:(int)arg1 ;
-(void)setTextRect:(CGRect)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIcon:(id)arg1 ;
-(CGRect)textRect;
-(int)layoutMode;
@end

