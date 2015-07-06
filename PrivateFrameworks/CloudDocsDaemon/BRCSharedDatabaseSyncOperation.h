/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <CloudDocsDaemon/BRCOperationSubclass.h>

@class BRCServerChangeState, NSString;

@interface BRCSharedDatabaseSyncOperation : _BRCOperation <BRCOperationSubclass> {

	BRCServerChangeState* _changeState;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queue;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(char)shouldRetryForError:(id)arg1 ;
-(void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_performFetchChangedZones;
-(void)_performAfterRegisteringForPushes:(/*^block*/id)arg1 ;
-(id)initWithSyncContext:(id)arg1 changeState:(id)arg2 group:(id)arg3 ;
@end

