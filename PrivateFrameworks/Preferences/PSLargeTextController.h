/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UILabel, NSArray, PSSpecifier;

@interface PSLargeTextController : PSListController {

	UILabel* _bodyExampleLabel;
	UILabel* _headlineExampleLabel;
	int _selectedCategoryIndex;
	NSArray* _contentSizeCategories;
	PSSpecifier* _sliderGroupSpecifier;
	char _usesExtendedRange;
	char _showsExtendedRangeSwitch;

}

@property (assign,nonatomic) char showsExtendedRangeSwitch;              //@synthesize showsExtendedRangeSwitch=_showsExtendedRangeSwitch - In the implementation block
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(id)specifiers;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)setUsesExtendedRange:(id)arg1 forSpecifier:(id)arg2 ;
-(id)usesExtendedRangeForSpecifier:(id)arg1 ;
-(void)setDynamicTypeValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getDynamicTypeValueForSpecifier:(id)arg1 ;
-(void)setShowsExtendedRangeSwitch:(char)arg1 ;
-(char)showsExtendedRangeSwitch;
@end

