/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIItem, SKUIGiftTableSectionHeaderView, NSDate;

@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection {

	NSString* _dateString;
	SKUIItem* _giftItem;
	UIEdgeInsets _headerInsets;
	SKUIGiftTableSectionHeaderView* _headerView;
	NSDate* _sendDate;
	int _sendDateStyle;

}

@property (nonatomic,retain) SKUIItem * giftItem;                    //@synthesize giftItem=_giftItem - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerInsets; 
@property (nonatomic,copy) NSDate * sendDate;                        //@synthesize sendDate=_sendDate - In the implementation block
@property (assign,nonatomic) int sendDateStyle;                      //@synthesize sendDateStyle=_sendDateStyle - In the implementation block
-(float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(int)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_headerView;
-(void)setSendDate:(NSDate *)arg1 ;
-(void)setSendDateStyle:(int)arg1 ;
-(id)headerViewForTableView:(id)arg1 ;
-(void)setGiftItem:(SKUIItem *)arg1 ;
-(void)setHeaderInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)headerInsets;
-(SKUIItem *)giftItem;
-(NSDate *)sendDate;
-(int)sendDateStyle;
@end

