/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:58 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSMetricsEventTable : NSObject {

	SSSQLiteDatabase* _database;

}
+(id)databasePath;
-(id)initWithDatabase:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
-(char)_setupDatabase;
@end
