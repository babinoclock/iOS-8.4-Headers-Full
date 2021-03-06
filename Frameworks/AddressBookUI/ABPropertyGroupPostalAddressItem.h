/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertyGroupItem.h>

@class CNPostalAddress;

@interface ABPropertyGroupPostalAddressItem : ABPropertyGroupItem

@property (nonatomic,readonly) CNPostalAddress * address; 
-(char)isEquivalentToItem:(id)arg1 whenEditing:(char)arg2 ;
-(id)normalizedValue;
-(id)defaultActionURL;
-(id)displayStringForValue:(id)arg1 ;
-(id)bestValue:(id)arg1 ;
-(char)_isMinimalAddress:(id)arg1 ;
-(CNPostalAddress *)address;
@end

