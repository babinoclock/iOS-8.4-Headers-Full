/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SiriUIKeyline, UIImageView, UIView, UILabel;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {

	SiriUIKeyline* _keyline;
	UIImageView* _chevronView;
	char _hasChevron;
	int _verticalAlignment;
	UIView* _accessoryView;
	UILabel* _textLabel;
	int _keylineType;
	UIOffset _textOffset;
	UIOffset _accessoryOffset;
	UIEdgeInsets _textAndAccessoryInsets;

}

@property (assign,nonatomic) int verticalAlignment;                            //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textAndAccessoryInsets;              //@synthesize textAndAccessoryInsets=_textAndAccessoryInsets - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                           //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                              //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) UIOffset textOffset;                              //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) UIOffset accessoryOffset;                         //@synthesize accessoryOffset=_accessoryOffset - In the implementation block
@property (nonatomic,readonly) SiriUIKeyline * keyline;                        //@synthesize keyline=_keyline - In the implementation block
@property (assign,nonatomic) int keylineType;                                  //@synthesize keylineType=_keylineType - In the implementation block
@property (assign,nonatomic) char hasChevron;                                  //@synthesize hasChevron=_hasChevron - In the implementation block
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UILabel *)textLabel;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(void)setTextOffset:(UIOffset)arg1 ;
-(UIOffset)textOffset;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setKeylineType:(int)arg1 ;
-(void)setHasChevron:(char)arg1 ;
-(UIEdgeInsets)textAndAccessoryInsets;
-(void)setTextAndAccessoryInsets:(UIEdgeInsets)arg1 ;
-(UIOffset)accessoryOffset;
-(void)setAccessoryOffset:(UIOffset)arg1 ;
-(SiriUIKeyline *)keyline;
-(int)keylineType;
-(char)hasChevron;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
@end

