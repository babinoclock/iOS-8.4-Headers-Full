/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:29 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFManagedStore.h>

@class NSXPCConnection, NSString;

@interface AFManagedStorageConnection : NSObject <AFManagedStore> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)_connection;
-(id)_managedStoreServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_managedStoreService;
-(id)domainObjectForKey:(id)arg1 ;
-(void)setDomainObject:(id)arg1 forKey:(id)arg2 ;
-(void)_clearConnection;
@end
