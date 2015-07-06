/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AddressBookUI/AddressBookUI-Structs.h>
@class NSMutableArray;

@interface ABDelayedNotificationSender : NSObject {

	CFArrayRef _delegatesForDelayedNotification;
	NSMutableArray* _delayedNotifications;
	CFDictionaryRef _delayedNotificationInfos;

}
-(char)containsDelegate:(id)arg1 ;
-(void)addDelayedNotification:(id)arg1 withInfo:(CFDictionaryRef)arg2 allowDuplicateNotification:(char)arg3 ;
-(void)removeDelegate:(id)arg1 andDeliverDelayedNotifications:(char)arg2 ;
-(void)addDelayedNotification:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)dealloc;
@end
