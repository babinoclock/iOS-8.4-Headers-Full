/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKMarkNotificationsReadOperation : CKOperation {

	NSArray* _notificationIDs;
	/*^block*/id _markNotificationsReadCompletionBlock;
	NSMutableArray* _notificationIDsMarkedRead;
	NSMutableDictionary* _errorsByNotificationID;

}

@property (nonatomic,copy) NSArray * notificationIDs;                                   //@synthesize notificationIDs=_notificationIDs - In the implementation block
@property (nonatomic,copy) id markNotificationsReadCompletionBlock;                     //@synthesize markNotificationsReadCompletionBlock=_markNotificationsReadCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * notificationIDsMarkedRead;                //@synthesize notificationIDsMarkedRead=_notificationIDsMarkedRead - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByNotificationID;              //@synthesize errorsByNotificationID=_errorsByNotificationID - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)errorsByNotificationID;
-(void)setErrorsByNotificationID:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)notificationIDsMarkedRead;
-(void)setNotificationIDsMarkedRead:(NSMutableArray *)arg1 ;
-(id)markNotificationsReadCompletionBlock;
-(void)setMarkNotificationsReadCompletionBlock:(id)arg1 ;
-(id)init;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)notificationIDs;
-(id)initWithNotificationIDsToMarkRead:(id)arg1 ;
-(void)setNotificationIDs:(NSArray *)arg1 ;
@end

