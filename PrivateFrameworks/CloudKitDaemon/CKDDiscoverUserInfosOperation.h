/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDDiscoverUserInfosOperation : CKDOperation {

	/*^block*/id _discoverUserInfosProgressBlock;
	NSArray* _emailsToDiscover;
	NSArray* _userRecordIDsToDiscover;

}

@property (nonatomic,copy) id discoverUserInfosProgressBlock;                //@synthesize discoverUserInfosProgressBlock=_discoverUserInfosProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * emailsToDiscover;                     //@synthesize emailsToDiscover=_emailsToDiscover - In the implementation block
@property (nonatomic,retain) NSArray * userRecordIDsToDiscover;              //@synthesize userRecordIDsToDiscover=_userRecordIDsToDiscover - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setDiscoverUserInfosProgressBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)emailsToDiscover;
-(NSArray *)userRecordIDsToDiscover;
-(void)setEmailsToDiscover:(NSArray *)arg1 ;
-(void)setUserRecordIDsToDiscover:(NSArray *)arg1 ;
-(id)discoverUserInfosProgressBlock;
-(void)_handleDiscoveredInfo:(id)arg1 emailToDiscover:(id)arg2 ;
-(void)_discoverEmails:(id)arg1 userRecordIDs:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

