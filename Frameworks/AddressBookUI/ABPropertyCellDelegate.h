/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPropertyCellDelegate <NSObject>
@required
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
-(void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
-(void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(int)arg3;
-(void)propertyCellDidChangeLayout:(id)arg1;
-(id)defaultValueForPropertyCell:(id)arg1;

@end

