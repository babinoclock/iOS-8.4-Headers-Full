/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class SKUIGiftAmountControl, UIControl, NSString;

@interface SKUIGiftAmountSection : SKUIGiftTableViewSection {

	SKUIGiftAmountControl* _amountControl;

}

@property (nonatomic,readonly) UIControl * amountControl; 
@property (nonatomic,readonly) int selectedAmount; 
@property (nonatomic,readonly) NSString * selectedAmountString; 
-(float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(int)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(UIControl *)amountControl;
-(int)selectedAmount;
-(NSString *)selectedAmountString;
@end

