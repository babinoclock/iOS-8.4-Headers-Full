/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceClient.h>

@interface FBSUIApplicationWorkspaceClient : FBSWorkspaceClient

@property (nonatomic,readonly) id<FBSUIApplicationWorkspaceClientDelegate> delegate; 
-(char)willObserveContextsManually;
-(char)_queue_handleMessageWithType:(int)arg1 message:(id)arg2 ;
-(void)_queue_handleLaunch:(id)arg1 ;
-(void)_queue_handleExit:(id)arg1 ;
-(void)_queue_handleAssertionExpirationImminent:(id)arg1 ;
@end

