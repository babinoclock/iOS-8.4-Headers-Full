/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPaymentOptionGroupItemCell.h>

@class UILabel, UIImageView, PKPassSnapshotter, UIColor;

@interface PKPaymentOptionGroupItemCardCell : PKPaymentOptionGroupItemCell {

	UILabel* _displayLabel;
	UILabel* _censoredPANLabel;
	UIImageView* _cardArtView;
	char _showBillingAddress;
	PKPassSnapshotter* _passSnapshotter;
	UIColor* _mainLabelColor;
	UIColor* _subTextLabelColor;
	UIColor* _highlightColor;

}

@property (nonatomic,retain) PKPassSnapshotter * passSnapshotter;              //@synthesize passSnapshotter=_passSnapshotter - In the implementation block
@property (nonatomic,retain) UIColor * mainLabelColor;                         //@synthesize mainLabelColor=_mainLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * subTextLabelColor;                      //@synthesize subTextLabelColor=_subTextLabelColor - In the implementation block
@property (assign,nonatomic) UIColor * highlightColor;                         //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign,nonatomic) char showBillingAddress;                          //@synthesize showBillingAddress=_showBillingAddress - In the implementation block
-(void)_updateCellContent;
-(void)setMainLabelColor:(UIColor *)arg1 ;
-(void)setSubTextLabelColor:(UIColor *)arg1 ;
-(UIColor *)mainLabelColor;
-(UIColor *)subTextLabelColor;
-(void)setShowBillingAddress:(char)arg1 ;
-(void)setPassSnapshotter:(PKPassSnapshotter *)arg1 ;
-(CGRect)_cardArtFrame;
-(CGRect)_displayLabelFrame;
-(CGRect)_censoredPANLabelFrame;
-(PKPassSnapshotter *)passSnapshotter;
-(char)showBillingAddress;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
@end

