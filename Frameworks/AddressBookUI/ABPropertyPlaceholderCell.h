/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABLabeledCell.h>

@class UILabel;

@interface ABPropertyPlaceholderCell : ABLabeledCell {

	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
-(void)setCardGroupItem:(id)arg1 ;
-(id)labelView;
-(float)minCellHeight;
-(void)dealloc;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(char)shouldPerformDefaultAction;
@end
