/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable {

	void* _addressBook;
	NSMutableDictionary* _addressBookCache;

}

@property (assign) void* addressBook;                                   //@synthesize addressBook=_addressBook - In the implementation block
@property (retain) NSMutableDictionary * addressBookCache;              //@synthesize addressBookCache=_addressBookCache - In the implementation block
+(id)get;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)fetchAddressBookInfoFromCacheForKey:(id)arg1 ;
-(void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2 ;
-(void)createAddressBook;
-(NSMutableDictionary *)addressBookCache;
-(void)sendABChangedNotificationSyncWithUserInfo:(id)arg1 ;
-(void)revertAddressBook:(char)arg1 ;
-(void)performQuery_sync:(/*^block*/id)arg1 ;
-(void)setAddressBookCache:(NSMutableDictionary *)arg1 ;
-(void*)addressBook;
@end

