/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSURL;

@interface SBSRestartRenderServerAction : BSAction

@property (nonatomic,readonly) NSURL * targetURL; 
+(id)restartActionWithTargetRelaunchURL:(id)arg1 ;
-(NSURL *)targetURL;
@end

