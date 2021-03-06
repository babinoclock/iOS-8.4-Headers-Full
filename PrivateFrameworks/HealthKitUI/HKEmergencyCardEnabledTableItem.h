/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKEmergencyCardTableItem.h>

@protocol HKEmergencyCardEnabledDelegate;
@class UITableViewCell, UISwitch;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	UISwitch* _switch;
	id<HKEmergencyCardEnabledDelegate> _enabledDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardEnabledDelegate> enabledDelegate;              //@synthesize enabledDelegate=_enabledDelegate - In the implementation block
-(id)initInEditMode:(char)arg1 ;
-(id)titleForHeader;
-(UIEdgeInsets)separatorInset;
-(id)_cell;
-(void)setEnabledDelegate:(id<HKEmergencyCardEnabledDelegate>)arg1 ;
-(id)titleForFooter;
-(id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2 ;
-(void)_switchSwitched:(id)arg1 ;
-(id<HKEmergencyCardEnabledDelegate>)enabledDelegate;
@end

