/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
-(void)dealloc;
-(id)init;
-(id)initReadOnly;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)modifyAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)_initReadOnly:(char)arg1 ;
-(void)_dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)readAsyncUsingSessionBlock:(/*^block*/id)arg1 ;
@end

