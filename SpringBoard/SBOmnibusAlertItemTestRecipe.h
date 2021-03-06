/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:56 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBThermalWarningAlertItemDelegate.h>
#import <SpringBoard/SBTestRecipe.h>

@class SBAlertItem, NSString;

@interface SBOmnibusAlertItemTestRecipe : NSObject <SBThermalWarningAlertItemDelegate, SBTestRecipe> {

	SBAlertItem* _item;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(id)_nextAlertItemToTest;
-(void)_dismissCurrentItem;
-(id)_anyIcon;
-(id)_anySUDescriptor;
-(id)_mapsApp;
-(void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2 ;
@end

