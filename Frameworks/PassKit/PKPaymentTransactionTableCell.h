/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSString;

@interface PKPaymentTransactionTableCell : UITableViewCell {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _amountLabel;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _amountString;

}

@property (nonatomic,retain) NSString * primaryString;                //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;              //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * amountString;                 //@synthesize amountString=_amountString - In the implementation block
+(float)rowHeight;
-(void)setAmountColor:(id)arg1 ;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
-(void)setAmountString:(NSString *)arg1 ;
-(NSString *)secondaryString;
-(NSString *)amountString;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(NSString *)primaryString;
@end

