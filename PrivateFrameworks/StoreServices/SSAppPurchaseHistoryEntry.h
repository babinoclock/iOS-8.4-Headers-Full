/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)predicateForAccountIdentifier:(id)arg1 ;
+(id)predicateForNotHidden;
+(id)supportsPlatformPredicate:(char)arg1 ;
+(id)predicateForNotFirstParty;
@end

